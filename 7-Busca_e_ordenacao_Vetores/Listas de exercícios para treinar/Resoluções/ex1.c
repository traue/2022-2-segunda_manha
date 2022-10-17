/*
1. Crie um programa em C que seja capaz de ler um vetor de tamanho 
   10, ordená-lo e em seguida solicitar ao usuário um valor a ser 
   buscado. O programa deve retornar o índice novo (após ordenação) 
   do valor ou "-1" se não encontrar.
   Pense em uma otimização para a busca, ou seja, se o valor buscado
   é menor do que o índice acessado, então não encontrou.
*/

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

//retorna a posição do valro se encontrar ou -1 caso não encontre
//como sabemos que a entrada é de um vetor ORDENADO, podemos parar
//a busca no primeiro valor maior que o procurado
int buscaLinear(int v[], int tamanho, int vBuscado) {
    for (int i = 0; i < tamanho; i++) {
        if (v[i] > vBuscado) {
            printf("Ops... cheguei em um valor maior que o buscado: %i", i);
            return -1;
        }
        if (v[i] == vBuscado)
            return i;
    }
    return -1;
}

int main() {

    int v[10], vBuscado, indiceEncontrado;

    //entrada dos valores do vetor
    printf("Inicia a entrada dos dados do vetor....\n");
    for (int i = 0; i < 10; i++) {
        printf("Valor da %dª posição: ", (i + 1));
        scanf("%d", &v[i]);
    }

    //ordena o vetor
    bubbleSort(v, 10);

    //chama a função de impressão
    printVetor(v, 10);

    //entrada do valor a ser buscado:
    printf("Informe o valor a ser buscado: ");
    scanf("%d", &vBuscado);

    //início do processo de busca
    indiceEncontrado = buscaLinear(v, 10, vBuscado);

    if (indiceEncontrado == -1) {
        printf("\nO valor não foi encontrado!");
    } else {
        printf("Valor encontrado na posição %d\n", indiceEncontrado);
    }

    return 0;
}