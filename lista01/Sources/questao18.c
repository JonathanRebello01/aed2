#include <stdio.h>
#include <stdlib.h>
#include "Headers/questao18.h"

void entrada18(float *md1, float *md2);
void processamento18(float *md1, float *md2, float *mdFin);
void saida18(float *mdFin);

void questao18(void)
{
    float media1, media2, mediaFinal;

    entrada18(&media1, &media2);
    processamento18(&media1, &media2, &mediaFinal);
    saida18(&mediaFinal);
}

void entrada18(float *md1, float *md2)
{
    printf("a informe a media1: ");
    scanf("%f", md1);
    printf("a informe a media2: ");
    scanf("%f", md2);
}

void processamento18(float *md1, float *md2, float *mdFin)
{
    *mdFin = (*md1 + *md2) / 2.0;
}

void saida18(float *mdFin)
{
    if (*mdFin >= 7)
    {
        printf("aprovado");
    }

    else if (*mdFin < 3)
    {
        printf("reprovado");
    }

    else
    {
        printf("prova final");
    }
}
