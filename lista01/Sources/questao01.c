#include <stdio.h>
#include <stdlib.h>
#include "Headers/questao01.h"
void entrada01(int *pnum1, int *pnum2, int *pnum3);
void processamento01(int *pnum1, int *pnum2, int *pnum3, int *resultado);
void saida01(int *resultado);


void questao01(void)
{
int num1, num2, num3, result;


    entrada01(&num1, &num2, &num3);
    processamento01(&num1, &num2, &num3, &result);
    saida01(&result);
}

void entrada01(int *pnum1, int *pnum2, int *pnum3)
{
    printf("Informe o primeiro numero inteiro: ");
    scanf("%d", pnum1);
    printf("\n Informe o segundo numero inteiro: ");
    scanf("%d", pnum2);
    printf("\n Informe o terceiro numero inteiro: ");
    scanf("%d", pnum3);
}

void processamento01(int *pnum1, int *pnum2, int *pnum3, int *resultado)
{
    *resultado = *pnum1 + *pnum2 + *pnum3;
}

void saida01(int *resultado)
{
    printf("\n O resultado da soma desses tres numeros e: %d", *resultado);
}
