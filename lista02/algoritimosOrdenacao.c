#include<stdio.h>
#include<stdlib.h>
#define TAM 10

void ordenacaoBolha(int lista[TAM]);
void ordenacaoInsercao(int lista[TAM]);
void ordenacaoSelecao(int lista[TAM]);

int main (){
    int listaAleatoria[TAM];

    printf("digite os 10 numeros da lista: ");
    for (int i = 0; i < TAM; i++){
    scanf("%d", &listaAleatoria[i]);
    }

    printf("Lista  Aleatoria: ");
    printf("[");
    for (int i = 0; i < TAM - 1; i++){
    printf("%d", listaAleatoria[i]);
    printf(", ");
    }
    printf("%d", listaAleatoria[TAM - 1]);
    printf("]\n");

    ordenacaoBolha(listaAleatoria);
    ordenacaoInsercao (listaAleatoria);
    ordenacaoSelecao (listaAleatoria);

return 0;
}

void ordenacaoBolha (int lista[TAM]){
    int aux = 0;
    for (int i = 1; i < TAM; i++){
        for(int j = 0; j < TAM - 1; j++){
          if (lista[j] > lista[j+1]){
            aux = lista[j+1];
            lista[j+1] = lista[j];
            lista[j] = aux;
          }
        }
    }

    printf("Lista  Ordenada por bolha: ");
    printf("[");

    for (int i = 0; i < TAM - 1; i++){
    printf("%d", lista[i]);
    printf(", ");
    }

    printf("%d", lista[TAM - 1]);
    printf("]\n");
}


void ordenacaoInsercao (int lista[TAM]){
    int aux, j;
    for(int i = 0; i < TAM - 1; i++){
        if(lista[i] > lista[i + 1]){
            aux = lista[i+1];
            lista[i+1] = lista[i];
            lista[i] = aux;
            j = i-1;
            while (j>=0){
                if(aux<lista[j]){
                    lista[j+1] = lista[j];
                    lista[j] = aux;
                }
                else{
                    break;
                }
                j=j-1;
            }
            
        }
    }

    printf("Lista  Ordenada por insercao: ");
    printf("[");

    for (int i = 0; i < TAM - 1; i++){
    printf("%d", lista[i]);
    printf(", ");
    }

    printf("%d", lista[TAM - 1]);
    printf("]\n");

}

void ordenacaoSelecao(int lista[TAM]){
    int menor, aux;

    for (int i = 0; i < TAM - 1; i++){
        menor = i;
        for(int j = i+1; j < TAM; j++){
          if (lista[menor] > lista[j]){
            menor = j;
          }
          if( i != menor){
            aux = lista[i];
            lista[i] = lista[menor];
            lista[menor] = aux;
          }
        }

    }

    printf("Lista  Ordenada por selecao: ");
    printf("[");

    for (int i = 0; i < TAM - 1; i++){
    printf("%d", lista[i]);
    printf(", ");
    }

    printf("%d", lista[TAM - 1]);
    printf("]\n");

}