#include<stdio.h>
#include<stdlib.h>
#include "Headers/questao05.h"

void entrada05(float *salBase, float *qntDep);
void processamento05(float *salBase, float *qntDep, float *salBrt);
void saida05(float *salBrt);


void questao05(void)
{
 float salarioBase, qntDependentes, salarioBruto;

    entrada05(&salarioBase, &qntDependentes);
    processamento05(&salarioBase, &qntDependentes, &salarioBruto);
    saida05(&salarioBruto);
}

void entrada05(float *salBase, float *qntDep)
{
    printf("Informe o salario base: ");
    scanf("%f", salBase);
    printf("\n Informe a quantidade de dependentes: ");
    scanf("%f", qntDep);

}

void processamento05(float *salBase, float *qntDep, float *salBrt)
{   
    *salBrt = (*salBase)+((*qntDep)*32.0);

    *salBrt = *salBrt - ((*salBrt*27.5) / 100.0);
}

void saida05(float *salBrt)
{
        printf("\n O salario final e: %.2f", *salBrt);  
}