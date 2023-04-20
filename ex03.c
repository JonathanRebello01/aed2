#include <stdio.h>

int soma(int valor1, int valor2, int valor3)
{
    valor3 = valor1 + valor2;
}

int somaP(int *valor1, int *valor2, int *valor3)
{
    *valor3 = *valor1 + *valor2;
}


int main()
{
    
        int numero = 10;
        int *ponteiro = NULL;

        ponteiro = &numero;


        printf("%d\n", ponteiro);
        printf("%d\n", numero);
        printf("%ld\n", &numero);
        printf("%d", *ponteiro);
    

    int numero1 = 10;
    int numero2 = 30;
    int resultado = 0;

    // somaP(&numero1, &numero2, &resultado);

   // printf("Resultado: %d", resultado);

    return 0;
}