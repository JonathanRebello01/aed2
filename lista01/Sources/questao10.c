#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include "Headers/questao10.h"

void entrada10(char *pw);
void processamento10(char *pw, bool *validacao);
void saida10(bool validacao);

void questao10(void)
{
    char senha[50];
    bool validacao = false;

    entrada10(senha);

    processamento10(senha, &validacao);

    saida10(validacao);
}

void entrada10(char *pw)
{
    printf("digite sua senha: ");
    scanf("%s", pw);
}

void processamento10(char *pw, bool *validacao)
{
    for (int i = 0; i < strlen(pw); i++) {
        pw[i] = toupper(pw[i]);
    }

    if (strcmp(pw, "LINGUAGEMC") == 0)
    {
        *validacao = true;
    }
    else{
        *validacao = false;
    }
}

void saida10(bool validacao)
{
    if (validacao){
        printf(" senha valida <3 :)");
    }
    else{
        printf("SENHA INVALIDA");
    }
}