#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 5;
    int tamanho = sizeof(x);

    printf("\nx = %d", x);
    printf("\ntamanho = %d", tamanho);

    int v[32];
    int tamanhoVet = sizeof(v);
    int qtdElementos = sizeof(v) / sizeof(int);

    printf("\nTamanho do Vetor na memória = %d", tamanhoVet);
    printf("\nQtd de elementos no vetor = %d", qtdElementos);
    printf("\n\n");
}