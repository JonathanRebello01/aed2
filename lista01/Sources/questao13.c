#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Headers/questao13.h"

void entrada13(int *num);
void processamento13(int *num, bool *valida);
void saida13(bool *valida);

void questao13(void)
{
        int numero;
        bool validacao = false;

        entrada13(&numero);
        processamento13(&numero, &validacao);
        saida13(&validacao);
}

void entrada13(int *num)
{
        printf("digite um numero: ");
        scanf("%d", num);
}

void processamento13(int *num, bool *valida)
{
        if ((*num % 5) == 0)
        {
                *valida = true;
        }
        else
        {
                *valida = false;
        }
}

void saida13(bool *valida)
{

        if (*valida)
        {
                printf("O numero e divisivel por 5");
        }
        else
        {
                printf("O numero nao e divisivel por 5");
        }
}