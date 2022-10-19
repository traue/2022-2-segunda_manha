//Programa para realização de busca linear em um vetor não ordenado

#include <stdio.h>


//retorna a posição do valor se encontrar ou -1 caso não encontre
int buscaLinear(int v[], int tamanho, int vBuscado) {
    for (int i = 0; i < tamanho; i++) {
        if (v[i] == vBuscado)
            return i;
    }
    return -1;
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

    int indiceBuscado = buscaLinear(v, n, valorBuscado);

    printf("\nÍndice do valor buscado: %d", indiceBuscado);

    return 0;
}