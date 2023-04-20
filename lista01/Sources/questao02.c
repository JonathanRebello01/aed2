#include<stdio.h>
#include<stdlib.h>
#include "Headers/questao02.h"
#include <stdio.h>
#include <stdlib.h>
#include "Headers/questao01.h"

void entrada02(float *nt1, float *nt2, float *nt3, float *nt4);
void processamento02(float *nt1, float *nt2, float *nt3, float *nt4, float *resultado);
void saida02(float *resultado);


void questao02(void)
{
float nota1, nota2, nota3, nota4, result;

    entrada02(&nota1, &nota2, &nota3, &nota4);
    processamento02(&nota1, &nota2, &nota3, &nota4, &result);
    saida02(&result);
}

void entrada02(float *nt1, float *nt2, float *nt3, float *nt4)
{
    printf("Informe a primeira nota: ");
    scanf("%f",nt1);
    printf("\n Informe a segunda nota: ");
    scanf("%f", nt2);
    printf("\n Informe a terceira nota: ");
    scanf("%f", nt3);
    printf("\n Informe a quarta nota: ");
    scanf("%f", nt4);
}

void processamento02(float *nt1, float *nt2, float *nt3, float *nt4, float *resultado)
{
    *resultado = (((*nt1)+(*nt2)+(*nt3)+(*nt4))/(4.0));
}

void saida02(float *resultado)
{
    printf("\n O resultado da media das 4 notas e: %f", *resultado);
}