#include <stdio.h>
#include <stdlib.h>
#include "Headers/questao11.h"

void entrada11(float *num);
void processamento11(bool *valida, float *num);
void saida11(bool *result);

void questao11(void)
{
    float numero;
    bool validacao = false;

    entrada11(&numero);
    processamento11(&validacao, &numero);
    saida11(&validacao);
}

void entrada11(float *num)
{
    printf("digite um numero: ");
    scanf("%f", num);
}

void processamento11(bool *valida, float *num)
{
    if (*num > 100.0 && *num < 500)
    {
        *valida = true;
    }
}

void saida11(bool *result)
{
    if (*result)
    {
        printf("ALERTA, o número esta entre 100 e 500");
    }
}