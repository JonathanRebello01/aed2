#include<stdio.h>
#include<stdlib.h>
#include "Headers/questao03.h"

void entrada03(float *nt1, float *nt2, float *ps1, float *ps2);
void processamento03(float *nt1, float *nt2, float *ps1, float *ps2, float *result);
void saida03(float *resultado);


void questao03(void)
{
float nota1, nota2, peso1, peso2, result;

    entrada03(&nota1, &nota2, &peso1, &peso2);
    processamento03(&nota1, &nota2, &peso1, &peso2, &result);
    saida03(&result);
}

void entrada03(float *nt1, float *nt2, float *ps1, float *ps2)
{
    printf("Informe a primeira nota: ");
    scanf("%f",nt1);
    printf("\n Informe a segunda nota: ");
    scanf("%f", nt2);
    printf("\n Informe o peso da primeira nota: ");
    scanf("%f", ps1);
    printf("\n Informe o peso da segunda nota: ");
    scanf("%f", ps2); 
}

void processamento03(float *nt1, float *nt2, float *ps1, float *ps2, float *result)
{
*result = (((*nt1) * (*ps1)) + ((*nt2) * (*ps2))) / (*ps1 + *ps2);
}

void saida03(float *resultado)
{
     printf("\n O resultado da media ponderada entre as duas notas e: %f", *resultado);  
}