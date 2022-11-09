/*
    1. Crie um programa em C que faça a leitura de um vetor de interios de
        tamanho N, realize a ordenação por seleção utilizando um método e, 
        em seguida, permita o usuário digitar um valor a ser inserido.
        A inserção deverá ocorrer por função.
*/

#include <stdio.h>

//funçõ para impressão de um vetor
void printVetor(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\n[%d] => %d", i, v[i]);
    }
    printf("\n");
}

void ordenacaoSelecao(int v[], int n) {
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (v[j] > v[i]) { //troca
                int aux = v[j];
                v[j] = v[i];
                v[i] = aux;
            }
        }
    }
}

void insereEmVetorOrdenado(int v[], int vInserido, int n) {

    int posicaoInsercao;

    //determinar a posição onde devemos inserir o valor
    for (int i = 0; i < n; i++) {
        if (vInserido < v[i]) {
            posicaoInsercao = i;
            break;
        } else {
            posicaoInsercao = i + 1;
        }
    }

    printf("\nPosição a ser inserido: %d ", posicaoInsercao);

    //mover todos os dados subsequentes do vetor "para o lado direito"
    for (int i = n + 1; i >= posicaoInsercao; i--) 
        v[i] = v[i-1];
    
    //Insere na posição correta:
    v[posicaoInsercao] = vInserido;
}

int main() {

    int v[100], n, vInserido, posicaoInsercao = 0;

    //leitura do vetor
    printf("\nQual o tamanho do vetor (menor que 100)? ");
    scanf("%d", &n);

    //entrada dos dados no vetor:
    printf("\nInsira os valores do vetor...\n");
    for (int i = 0; i < n; i++) {
        printf("Valor da posição %d: ", i);
        scanf("%d", &v[i]);
    }

    //impressão do vetor por função
    printf("\nVetor original: \n");
    printVetor(v, n);

    //ordena o vetor:
    ordenacaoSelecao(v, n);

    //impressão do vetor ordenado
    printf("\nVetor ordenado:\n");
    printVetor(v, n);

    //solicitação do valor a ser inserido
    printf("\nValor a ser inserido: ");
    scanf("%d", &vInserido);

    //insere no vetor:
    insereEmVetorOrdenado(v, vInserido, n);

    //impressão do vetor com o dado novo:
    printf("\nVetor após a inserção....:");
    printVetor(v, n + 1);

    return 0;
}