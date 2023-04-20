#include<stdio.h>
#include<stdlib.h>
#include "Headers/questao06.h"

void entrada06(float *valAnt, float *valNov);
void processamento06(float *valAnt, float *valNov, float *prcAumento);
void saida06(float *result);


void questao06(void)
{
float valorAntigo, valorNovo, porcentagemAumento;

    entrada06(&valorAntigo, &valorNovo);
    processamento06(&valorAntigo, &valorNovo, &porcentagemAumento);
    saida06(&porcentagemAumento);
}

void entrada06(float *valAnt, float *valNov)
{
    printf("Informe o valor antigo do produto: ");
    scanf("%f",valAnt);
    printf("\n Informe o valor atual do produto: ");
    scanf("%f", valNov);
}

void processamento06(float *valAnt, float *valNov, float *prcAumento)
{
    *prcAumento = (( ((*valNov)-(*valAnt)) / (*valAnt) )*100.0);
}

void saida06(float *result)
{
        printf("\n A porcentagem de aumento do produto é de: %.2f%%", *result);  
}
