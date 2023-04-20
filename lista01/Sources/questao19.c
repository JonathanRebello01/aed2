#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Headers/questao19.h"

void entrada19(float *ld1, float *ld2, float *ld3);
void processamento19(float *ld1, float *ld2, float *ld3, bool *eq, bool *is, bool *esc);
void saida19(bool *eq, bool *is);

void questao19(void)
{
    float lado1, lado2, lado3;
    bool equilatero = false;
    bool isosceles = false;
    bool escaleno = false;

    entrada19(&lado1, &lado2, &lado3);
    processamento19(&lado1, &lado2, &lado3, &equilatero, &isosceles, &escaleno);
    saida19(&equilatero, &isosceles);
}

void entrada19(float *ld1, float *ld2, float *ld3)
{
    printf("Digite o comprimento do lado 1: ");
    scanf("%f", ld1);

    printf("Digite o comprimento do lado 2: ");
    scanf("%f", ld2);

    printf("Digite o comprimento do lado 3: ");
    scanf("%f", ld3);
}

void processamento19(float *ld1, float *ld2, float *ld3, bool *eq, bool *is, bool *esc)
{
    if (*ld1 == *ld2 && *ld1 == *ld3)
    {
        *eq = true;
    }
    else if (*ld1 == *ld2 || *ld1 == *ld3 || *ld2 == *ld3)
    {
        *is = true;
    }
    else
    {
        *esc = true;
    }
}

void saida19(bool *eq, bool *is)
{
    if (*eq)
    {
        printf("Triangulo equilatero\n");
    }
    else if (*is)
    {
        printf("Triangulo isosceles\n");
    }
    else
    {
        printf("Triangulo escaleno\n");
    }
}
