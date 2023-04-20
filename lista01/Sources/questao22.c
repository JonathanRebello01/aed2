#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Headers/questao22.h"

void entrada22();
void processamento22();
void saida22();

void questao22(void)
{
    char municipio[50];
    int eleitores, votosPrimeiro;
    bool segundoTurno = false;

    entrada22(&municipio, &eleitores, &votosPrimeiro);
    processamento22(&municipio, &eleitores, &votosPrimeiro, &segundoTurno);
    saida22(&segundoTurno, &municipio);
}

void entrada22(char *mun, int *el, int *vtsPrim)
{
    printf("Digite o nome do município: ");
    scanf("%s", mun);
    printf("Digite a quantidade de eleitores: ");
    scanf("%d", el);
    printf("Digite o número de votos do candidato mais votado: ");
    scanf("%d", vtsPrim);
}

void processamento22(char *mun, int *el, int *vtsPrim, bool *segTurn)
{
    if (*el > 200000 && *vtsPrim <= (*el * 0.5))
    {
        *segTurn = true;
    }
    else
    {
        *segTurn = false;
    }
}

void saida22(bool *segTurn, char **mun)
{
    if (*segTurn)
    {
        printf("Haverá segundo turno na eleição municipal de %s\n", mun);
    }
    else
    {
        printf("Não haverá segundo turno na eleição municipal de %s\n", mun);
    }
}
