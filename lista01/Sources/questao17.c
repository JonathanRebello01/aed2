#include <stdio.h>
#include <stdlib.h>
#include "Headers/questao17.h"

void entrada17(float *vlCmp);
void processamento17(float *vlCmp, float *vlVend);
void saida17(float *vlVend);

void questao17(void)
{
    float valorCompra, valorVenda;

    entrada17(&valorCompra);
    processamento17(&valorCompra, &valorVenda);
    saida17(&valorVenda);
}

void entrada17(float *vlCmp)
{
    printf("Informe o valor da compra: ");
    scanf("%f", vlCmp);
}

void processamento17(float *vlCmp, float *vlVend)
{
    if (*vlCmp < 200)
    {
        *vlVend = *vlCmp * 1.5;
    }

    else
    {
        *vlVend = *vlCmp * 1.3;
    }
}

void saida17(float *vlVend)
{
    printf("\n o valor da venda do produto sera: %.2f", *vlVend);  
}