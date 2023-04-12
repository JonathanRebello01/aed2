#include <stdio.h>

int main()
{
    const int MAXFRASES = 5;
    const int MAXGAVETAS = 10;
    const int MAXARMARIO = 8;

    int maior = MAXFRASES;
    if (MAXGAVETAS >= MAXFRASES)
    {
        maior = MAXGAVETAS;
    }
    if (MAXARMARIO >= MAXGAVETAS)
    {
        maior = MAXARMARIO;
    }
    const int MAXNUNBER = maior;

    char frase[MAXFRASES];
    int gavetas[MAXGAVETAS];
    float armario[MAXARMARIO];

    for (int i = 0; i < MAXNUNBER; i++)
    {
        if (i < MAXFRASES)
        {
            printf("Digite uma letra: \n");
            scanf(" %c", &frase[i]);
            printf("A letra digitada foi: %c \n", frase[i]);
        }

        if (i < MAXGAVETAS)
        {
            printf("Digite um número: \n");
            scanf("%d", &gavetas[i]);
            printf("o numero digitado foi: %d \n", gavetas[i]);
        }

        if (i < MAXARMARIO)
        {
            printf("Digite um float: \n");
            scanf("%f", &armario[i]);
            printf("o float digitado foi: %f \n", armario[i]);
        }
    }

    printf("Array: [");
    for (int i = 0; i < MAXFRASES; i++) {
        printf("%c ", frase[i]);
    }
    printf("] \n");

        printf("Array: [");
    for (int i = 0; i < MAXGAVETAS; i++) {
        printf("%d ", gavetas[i]);
    }
    printf("] \n");

        printf("Array: [");
    for (int i = 0; i < MAXARMARIO; i++) {
        printf("%f ", armario[i]);
    }
    printf("] \n");

    return 0;
}