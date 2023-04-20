#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "Headers/questao09.h"

void entrada09(float *num);
void processamento09(float *num, bool *veri);
void saida09(bool *veri);


void questao09(void)
{
    float numero;
    bool verifica = false;

    entrada09(&numero);
    processamento09(&numero, &verifica);
    saida09(&verifica);
}

void entrada09(float *num)
{
    printf("digite um numero: ");
    scanf ("%f", num);
}

void processamento09(float *num, bool *veri)
{
    if(*num > 100.0){
            *veri = true;
    }
}

void saida09(bool *veri)
{
    if(*veri == true){
            printf ("ALERTA, o número é maior do que 100");
    }
    else{
        printf ("nao e maior que 100");
    }
}