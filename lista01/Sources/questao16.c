#include <stdio.h>
#include <stdlib.h>
#include "Headers/questao16.h"

void entrada16(float *slBrt);
void processamento16(float *slBrt, float *slLiq);
void saida16(float *slLiq);

void questao16(void)
{
    float salarioBruto, salarioLiquido;

    entrada16(&salarioBruto);
    processamento16(&salarioBruto, &salarioLiquido);
    saida16(&salarioLiquido);
}

void entrada16(float *slBrt)
{
    printf("Informe o salario bruto: ");
    scanf("%f", slBrt);
}

void processamento16(float *slBrt, float *slLiq)
{
    if (*slBrt < 2000)
    {
        *slLiq = *slBrt * 0.9;
    }
    else
    {
        *slLiq = *slBrt * 0.8;
    }
}

void saida16(float *slLiq)
{
     printf("\n O salario liquido e: %.2f", *slLiq);  

}