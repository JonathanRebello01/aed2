#include<stdio.h>
#include<stdlib.h>
#include "Headers/questao08.h"

void entrada08(float *vel);
void processamento08(float *vel, float *result);
void saida08(float *result);


void questao08(void)
{
float velocidade, resultado;

    entrada08(&velocidade);
    processamento08(&velocidade, &resultado);
    saida08(&resultado);
}

void entrada08(float *vel)
{
    printf("digite a velocidade de um veículo em km/h: ");
    scanf ("%f", vel);

}

void processamento08(float *vel, float *result)
{
    *result = ((*vel) / (3.6));
}

void saida08(float *result)
{
    printf ("a velocidade do veiculo em m/s e de: %.2f", *result);

}