/*
2. Crie um programa em C que seja capaz de ler um vetor de tamanho qualquer,
   ordená-lo e, em seguida, solicitar ao usuário um novo valor a ser inserido.
   Este processo de inserção deverá ocorrer no local correto com
   redimencionamento do vetor (sem reordená-lo).
   Do estudo de caso 1 (assunto 7), crie funções para ordenação, impressão e 
   inserção.
   O programa deve imprimir o vetor orignial, ordenado e o novo vetor com o 
   valor inserido
*/

#include <stdio.h>

//funçõ para impressão de um vetor
void printVetor(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\n[%d] => %d", i, v[i]);
    }
    printf("\n");
}

void troca(int* v1, int *v2) {
    int temp = *v1;
    *v1 = *v2;
    *v2 = temp;
}

//função de ordenação por método da bolha
void bubbleSort(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) { //verifica se deve trocar ou não
                troca(&v[j], &v[j + 1]);
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

    //solicitação do valor a ser inserido
    printf("\nValor a ser inserido: ");
    scanf("%d", &vInserido);

    //impressão do vetor por função
    printVetor(v, n);

    //ordena o vetor:
    bubbleSort(v, n);

    //impressão do vetor ordenado
    printf("\nVetor ordenado:\n");
    printVetor(v, n);

    //insere no vetor:
    insereEmVetorOrdenado(v, vInserido, n);

    //impressão do vetor com o dado novo:
    printf("\nVetor após a inserção....:");
    printVetor(v, n + 1);

    return 0;
}