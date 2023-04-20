#include<stdio.h>
#include<stdlib.h>
#include "Headers/questao12.h"

void entrada12(float *nt1, float *nt2);
void processamento12(float *nt1, float *nt2, float *result);
void saida12(float *result);


void questao12(void)
{
    float nota1, nota2, resultado;

    entrada12(&nota1, &nota2);
    processamento12(&nota1, &nota2, &resultado);
    saida12(&resultado);
}

void entrada12(float *nt1, float *nt2)
{
    printf("Informe a primeira nota: ");
    scanf("%f",nt1);
    printf("\n Informe a segunda nota: ");
    scanf("%f", nt2);
}

void processamento12(float *nt1, float *nt2, float *result)
{
    *result = (*nt1+*nt2)/2.0;
}

void saida12(float *result)
{
    if(*result >= 7){

        printf("\nAluno aprovado");

    }  
    else{

        printf("\nAluno reprovado");

    }
}