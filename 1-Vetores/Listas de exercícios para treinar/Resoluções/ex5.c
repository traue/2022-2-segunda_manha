/*
5. Construa um programa que leia dados para um vetor de 100 elementos inteiros. Imprimir o
maior e o menor, sem ordenar, o percentual de números pares e a média dos elementos do vetor.
*/

#include <stdio.h>

int main() {

    int tamanhoVetor = 10;
    int v[tamanhoVetor], menor, maior;
    float media = 0, pares = 0; 

    //leitur dos dados
    printf("Vamos iniciar a digitação dos valores...:\n"); 
    for (int i = 0; i < tamanhoVetor; i++) {
        printf("Valor a %dª poisição: ", (i + 1));
        scanf("%d", &v[i]);
    }

    menor = maior = v[0];

    for (int i = 0; i < tamanhoVetor; i++) {
        //busca do maior:
        if(v[i] > maior) {
            maior = v[i];
        }

        //busca do menor:
        if(v[i] < menor) {
            menor = v[i];
        }

        //contagem de pares:
        if(v[i] % 2 == 0) {
            pares++;
        }

        //soma para a média: 
        media += v[i];
    }

    printf("\nMenor valor encontrado: %d", menor);
    printf("\nMaior valor encontrado: %d", maior);
    printf("\nMédia dos valores: %.2f", (media / tamanhoVetor));
    printf("\nPorcentagem de valores pares: %.2f", (pares / tamanhoVetor) * 100);

    return 0;
}