#include <stdio.h>
#include <stdlib.h>
#include "Headers/questao24.h"

void entrada24(int *vc, int *vp);
void processamento24(int *vc, int *vp, int *trc, int *nt100, int *nt10, int *nt1);
void saida24(int *nt100, int *nt10, int *nt1);

void questao24(void)
{
    int valorCompra, valorPag, troco, nota100, nota10, nota1;

    entrada24(&valorCompra, &valorPag);
    processamento24(&valorCompra, &valorPag, &troco, &nota100, &nota10, &nota1);
    saida24(&nota100, &nota10, &nota1);
}

void entrada24(int *vc, int *vp)
{
    printf("Digite o valor da compra: ");
    scanf("%d", vc);
    printf("Digite o valor do pagamento: ");
    scanf("%d", vp);
}

void processamento24(int *vc, int *vp, int *trc, int *nt100, int *nt10, int *nt1)
{

    if (*vp < *vc)
    {
        printf("Pagamento Negado\n");
    }

    *trc = *vp - *vc;
    *nt100 = *trc / 100;
    *nt10 = (*trc % 100) / 10;
    *nt1 = (*trc % 10);
}

void saida24(int *nt100, int *nt10, int *nt1)
{
    printf("O caixa deve fornecer:\n");
    printf("%d nota(s) de R$100\n", *nt100);
    printf("%d nota(s) de R$10\n", *nt10);
    printf("%d nota(s) de R$1\n", *nt1);
}