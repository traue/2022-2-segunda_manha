/*
    Como inserir um valor em vetor ordenado?

    Há duas opções: 
        - Inserir na posição correta (buscar qual é essa posição) << usaremos este
        - Inserir ao final e reordenar (muito menos eficiente)
*/

#include <stdio.h>

int main() {

    int v[100], n, vInserido, posicaoInsercao = 0;

    printf("\nQual o tamanho do vetor (menor que 100)? ");
    scanf("%d", &n);

    //entrada dos dados no vetor:
    printf("\nInsira os valores de forma ordenada...\n");
    for (int i = 0; i < n; i++) {
        printf("Valor da posição %d: ", i);
        scanf("%d", &v[i]);
    }

    printf("\nValor a ser inserido: ");
    scanf("%d", &vInserido);

    printf("Vetor original: ");
    for (int i = 0; i < n; i++)
        printf("% 5d", v[i]);

    //determinar a posiução onde devemos inserir o valor
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

    //impressão do vetor com o dado novo:
    printf("\nVetor após a inserção....:");
    for (int i = 0; i < n + 1; i++)
        printf("% 5d", v[i]);

    return 0;
}