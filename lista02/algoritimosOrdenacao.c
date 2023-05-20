#include<stdio.h>
#include<stdlib.h>
#define TAM 10

void ordenacaoBolha(int lista[TAM]);
void ordenacaoInsercao(int lista[TAM]);
void ordenacaoSelecao(int lista[TAM]);
void merge(int lista[TAM], int inicio, int meio, int fim);
void mergeSort(int lista[TAM], int inicio, int fim);
void swap(int lista[TAM], int a, int b);
int partition(int lista[TAM], int inicio, int fim);
void quickSort(int lista[TAM], int inicio, int fim);
void imprimeLista(int lista[TAM]);
void copiarLista(int listaOrigem[TAM], int listaDestino[TAM]);

int main (){
    int listaAleatoria[TAM], primeiraLista[TAM];

    printf("digite os 10 numeros da lista: ");
    for (int i = 0; i < TAM; i++){
    scanf("%d", &primeiraLista[i]);
    }
    imprimeLista(primeiraLista);

    copiarLista(primeiraLista,listaAleatoria);

    ordenacaoBolha(listaAleatoria);
    printf("Lista ordenada por bolha: ");
    imprimeLista(listaAleatoria);

    copiarLista(primeiraLista,listaAleatoria);

    ordenacaoInsercao (listaAleatoria);
    printf("Lista ordenada por insercao: ");
    imprimeLista(listaAleatoria);

    copiarLista(primeiraLista,listaAleatoria);

    ordenacaoSelecao (listaAleatoria);
    printf("Lista ordenada selecao: ");
    imprimeLista(listaAleatoria);

    copiarLista(primeiraLista,listaAleatoria);

    mergeSort (listaAleatoria, 0, TAM-1); 
    printf("Lista ordenada merge: ");
    imprimeLista(listaAleatoria);

    copiarLista(primeiraLista,listaAleatoria);

    quickSort(listaAleatoria, 0, TAM - 1);
    printf("Lista ordenada quick sort: ");
    imprimeLista(listaAleatoria);

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

void ordenacaoSelecao(int lista[TAM]) {
    int menor, aux;

    for (int i = 0; i < TAM - 1; i++) {
        menor = i;

        for (int j = i + 1; j < TAM; j++) {
            if (lista[j] < lista[menor]) {
                menor = j;
            }
        }

        if (i != menor) {
            aux = lista[i];
            lista[i] = lista[menor];
            lista[menor] = aux;
        }
    }
}

void mergeSort(int lista[TAM], int inicio, int fim){

    if (inicio < fim) {
        
        int meio = inicio + (fim - inicio) / 2;

        mergeSort(lista, inicio, meio);
        mergeSort(lista, meio + 1, fim);

        merge(lista, inicio, meio, fim);
    }
}

void merge(int lista[TAM], int inicio, int meio, int fim) {
    int i, j, k;
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;

    int listaEsquerda[n1], listaDireita[n2];

    for (i = 0; i < n1; i++) {
        listaEsquerda[i] = lista[inicio + i];
    }

    for (j = 0; j < n2; j++) {
        listaDireita[j] = lista[meio + 1 + j];
    }

    i = 0; 
    j = 0; 
    k = inicio; 

    while (i < n1 && j < n2) {
        if (listaEsquerda[i] <= listaDireita[j]) {
            lista[k] = listaEsquerda[i];
            i++;
        } else {
            lista[k] = listaDireita[j];
            j++;
        }
        k++;
    }

        while (i < n1) {
        lista[k] = listaEsquerda[i];
        i++;
        k++;
    }

        while (j < n2) {
        lista[k] = listaDireita[j];
        j++;
        k++;
    }
}

void quickSort(int lista[TAM], int inicio, int fim) {
    if (inicio < fim) {
        int pivotIndex = partition(lista, inicio, fim);

        quickSort(lista, inicio, pivotIndex - 1);
        quickSort(lista, pivotIndex + 1, fim);
    }
}

int partition(int lista[TAM], int inicio, int fim) {
    int pivot = lista[fim]; // Escolhe o último elemento como pivô
    int i = inicio - 1;

    for (int j = inicio; j < fim; j++) {
        if (lista[j] < pivot) {
            i++;
            swap(lista, i, j);
        }
    }

    swap(lista, i + 1, fim);

    return i + 1;
}

void swap(int lista[TAM], int a, int b) {
    int temp = lista[a];
    lista[a] = lista[b];
    lista[b] = temp;
}

void imprimeLista(int lista[TAM]){

    printf("[");

    for (int i = 0; i < TAM - 1; i++){
    printf("%d", lista[i]);
    printf(", ");
    }

    printf("%d", lista[TAM - 1]);
    printf("]\n");

}

void copiarLista(int listaOrigem[TAM], int listaDestino[TAM]) {

    for (int i = 0; i < TAM; i++) {
        listaDestino[i] = listaOrigem[i];
    }
    
}