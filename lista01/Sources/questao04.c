#include<stdio.h>
#include<stdlib.h>
#include "Headers/questao04.h"

void entrada04(float *slInicial, float *pctAumento);
void processamento04(float *slInicial, float *pctAumento, float *resultado);
void saida04(float *resultado);


void questao04(void)
{
float salarioInicial, porcentagemAumento, result;

    entrada04(&salarioInicial, &porcentagemAumento);
    processamento04(&salarioInicial, &porcentagemAumento, &result);
    saida04(&result);
}

void entrada04(float *slInicial, float *pctAumento)
{
    printf("Informe o salario inicial: ");
    scanf("%f",slInicial);
    printf("\n Informe a porcentagem de aumento: ");
    scanf("%f", pctAumento);
}

void processamento04(float *slInicial, float *pctAumento, float *resultado)
{
*resultado = (*slInicial) + (((*slInicial) * (*pctAumento)) / 100);
}

void saida04(float *resultado)
{
    printf("\n O salario final e: %.2f", *resultado); 
}