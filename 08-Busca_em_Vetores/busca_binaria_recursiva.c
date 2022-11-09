//algotirmo de busca binária recursiva

#include <stdio.h>

int buscaBinariaRecursiva(int v[], int esq, int dir, int vBuscado) {
    if (dir >= esq) {
        int meio = esq + (dir - esq) / 2;

        //verifica se o valro já está no meio
        if (v[meio] == vBuscado)
            return meio;
        
        //se o elemento é MENOR que o valor que está no meio, então está a ESQUERDA do vetor
        if (v[meio] > vBuscado)
            return buscaBinariaRecursiva(v, esq, meio - 1, vBuscado);
        
        //se o elemento é MAIOR ou igual, só pode estar à direita do vetor
        return buscaBinariaRecursiva(v, meio + 1, dir, vBuscado);
    }
    return -1;
}

int main() {
    int v[] = {3, 6, 9, 13, 16, 17, 21, 400, 665, 667, 668};
    int tamanho = sizeof(v) / sizeof(v[0]);
    int vProcurado = 665;

    int posicao = buscaBinariaRecursiva(v, 0, tamanho - 1, vProcurado);

    if (posicao == -1)
        printf("\nValor não encontrado!\n\n");
    else
        printf("\nValor encontrado no índice %d do vetor.\n\n", posicao);

    return 0;
}