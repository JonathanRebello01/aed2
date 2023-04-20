#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Headers/questao14.h"

void entrada14(int *num);
void processamento14(int *num, bool *valida);
void saida14(bool *valida);

void questao14(void)
{
        int numero;
        bool validacao = false;

        entrada14(&numero);
        processamento14(&numero, &validacao);
        saida14(&validacao);
}

void entrada14(int *num)
{
        printf("digite um numero: ");
        scanf("%d", num);
}

void processamento14(int *num, bool *valida)
{
        if ((*num % 2) == 0)
        {
                *valida = true;
        }
        else
        {
                *valida = false;
        }
}

void saida14(bool *valida)
{
        if (*valida)
        {
                printf("O numero e par");
        }
        else
        {
                printf("O numero nao e par");
        }
}