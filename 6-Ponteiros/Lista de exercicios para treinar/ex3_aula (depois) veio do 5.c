/*  DEIXAREMOS ESTE EXERCÍCIO QUANDO FORMOS TRABALHAR COM PONTEIROS
    Considere um vetor VET de inteiros de tamanho N (dinâmico). 
    Construa um programa com o algoritmos recursivos para calcular:
     - O elemento máximo do vetor
     - O elemento mínimo do vetor
     - O produto dos elementos do vetor
     - A média dos elementos do vetor
*/

#include <stdio.h>

int maximo_vetor(int *vet, int tamanho) {
    if (tamanho == 1) {
        return vet[0];
    } else {
        int aux;
        aux = maximo_vetor(vet, tamanho - 1);
        if (aux < vet[tamanho - 1]) {
            return aux;
        } else {
            return vet[tamanho - 1];
        }
    }
}

int main() {
    
    int n;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);

    int vet[n];
    
    for (int i = 0; i < n; i++) {
        printf("Informe o valor da %dª posição: ", (i + 1));
    }

    return 0;
}