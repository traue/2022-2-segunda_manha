/*
    Faça um programa em C que armazene 15 números inteiros em um vetor chamado
    NUM e imprima uma listagem dos números lidos. Utilize um laço "for"
*/


#include <stdio.h>

int main() {

    int NUM[15];

    //laçao para leitura dos valores:
                 //ou <= 14
    for(int i = 0; i < 15; i++) {
        printf("\nInforme o valor da posição %d: ", (i + 1));
        scanf("%d", &NUM[i]);
    }

    //laço para impressão dos valores:
    for(int i = 0; i < 15; i++) {
        printf("\nValor da posição %d: %d", (i+1), NUM[i]);
    }

    return 0;
}