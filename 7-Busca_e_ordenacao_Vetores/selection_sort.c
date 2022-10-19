/* Este algoritmo utiliza a ordenação por seleção */



#include <stdio.h>

void imprimirVetor(int v[], int n) {
    printf("\nVetor: [");
    for (int i = 0; i < n; i++)
        printf("%3d ", v[i]);
    printf("]\n");
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

void ordenaSelecao_vGustavo(int vet[], int n) {
  int aux;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (vet[i] > vet[j]) {
        aux = vet[i];
        vet[i] = vet[j];
        vet[j] = aux;
      }
    }
  }
}

int main() {

    int x[] = {4, 2, 3, 0, 9, 66, 5, 7};

    printf("Vetor original: ");
    imprimirVetor(x, 8);

    ordenacaoSelecao(x, 8);

    printf("Vetor após a ordenação: ");
    imprimirVetor(x, 8);

    return 0;
}