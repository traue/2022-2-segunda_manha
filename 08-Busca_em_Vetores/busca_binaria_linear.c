//Algoritmo de busca binária linear em vetor

#include <stdio.h>

int buscaBinaria(int v[], int n, int vBusca) {
    int esq = 0;
    int dir = n - 1;

    while(esq <= dir) {
        int meio = esq + (dir - esq) / 2; //(esq + dir) / 2
        if (v[meio] == vBusca)
            return meio;
        if (v[meio] < vBusca)
            esq = meio + 1;
        else
            dir = meio - 1;
    }
    return -1;
}

int main() {
    int v[] = {2, 3, 6, 10, 14, 18, 21, 23, 45, 80, 121, 122, 632, 900, 1201, 1330};
    int n = sizeof(v) / sizeof(v[0]);
    int vBuscado = 14;
    int posicao = buscaBinaria(v, n, vBuscado);

    if (posicao == -1)
        printf("\nValor não encontrado!");
    else
        printf("\nValor encontrado na posição: %d\n", posicao);

    return 0;
}