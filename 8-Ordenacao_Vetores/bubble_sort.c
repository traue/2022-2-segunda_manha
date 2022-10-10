#include <stdio.h>


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

//funçõ para impressão de um vetor
void printVetor(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\n[%d] => %d", i, v[i]);
    }
    printf("\n");
}

int main() {

    int v[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    int n = sizeof(v) / sizeof(v[0]); //tamanho do vetor
    //imprime o vetor original
    printVetor(v, n);

    //ordenada
    bubbleSort(v, n);

    //imprime novamente o vetor, ordenado
    printVetor(v, n);

    return 0;
}