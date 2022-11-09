//Programa para realização de busca linear em um vetor não ordenado

#include <stdio.h>

void imprimirVetor(int v[], int n) {
    printf("\nVetor: [");
    for (int i = 0; i < n; i++)
        printf("%3d ", v[i]);
    printf("]\n");
}

//método de ordenação por inserção
void insertionSort(int v[], int n) {
    int key, i, j;
    for (i = 1; i < n; i++) {
        key = v[i];
        j = i - 1;
        while(j >= 0 && v[j] > key) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = key;
    }
}

//retorna a posição do valor se encontrar ou -1 caso não encontre
int buscaLinear_vetor_ordenado(int v[], int tamanho, int vBuscado) {
    //ordena o vetor antes de buscar
    insertionSort(v, tamanho);

    //mostra o vetor ordenado novo
    imprimirVetor(v, tamanho);

    for (int i = 0; i < tamanho; i++) {

        if (v[i] > vBuscado)
            break;

        if (v[i] == vBuscado)
            return i;
    }

    return -1;
}

//uma outra forma de implementar
int busca_linear_vOrdenado2(int v[], int n, int vBuscado) {
    int indice = 0;
    while (indice < n && v[indice] < vBuscado) {
        indice++;
    }

    if (indice >= n || v[indice] != vBuscado)
        return -1;

    return indice;
}

int main() {
    int n, valorBuscado;
     
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);
    int v[n];

    //preenchimento do vetor
    for (int i = 0; i < n; i++) {
        printf("Informe valor da posição %d: ", i);
        scanf("%d", &v[i]);
    }

    //início do processo de busca
    printf("\nQual valor deseja buscar: ");
    scanf("%d", &valorBuscado);

    int indiceBuscado = buscaLinear_vetor_ordenado(v, n, valorBuscado);

    int indiceBuscado2 = busca_linear_vOrdenado2(v, n, valorBuscado);

    printf("\nÍndice do valor buscado: %d", indiceBuscado);
    printf("\nÍndice do valor buscado (método 2): %d", indiceBuscado2);

    return 0;
}