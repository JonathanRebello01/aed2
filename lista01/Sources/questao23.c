#include <stdio.h>
#include <stdlib.h>
#include "Headers/questao23.h"

void entrada23(float *perc, char *tpCarr);
void processamento23(char *tpCarr, float *cons, float *perc);
void saida23(float *cons);

void questao23(void)
{
    float percurso, consumo;
    char tipoCarro;

    entrada23(&percurso, &tipoCarro);
    processamento23(&tipoCarro, &consumo, &percurso);
    saida23(&consumo);
}

void entrada23(float *perc, char *tpCarr)
{
    printf("Digite o percurso em quilômetros: ");
    scanf("%f", perc);
    printf("Digite o tipo do carro (A, B ou C): ");
    scanf(" %c", tpCarr);
}

void processamento23(char *tpCarr, float *cons, float *perc)
{

    switch (*tpCarr)
    {
    case 'A':
        *cons = *perc / 8;
        break;
    case 'B':
        *cons = *perc / 9;
        break;
    case 'C':
        *cons = *perc / 12;
        break;
    default:
        printf("Tipo de carro inválido!\n");
    }
}

void saida23(float *cons)
{
    printf("O consumo estimado de combustível é de %.2f litros.\n", *cons);
}