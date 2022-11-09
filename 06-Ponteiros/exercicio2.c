/*
    Crie um programa que leia números reais e mum vetor de tamanho 10.
    Imprima o endereço de cada posição desse vetor.
*/

#include <stdio.h>

int main() {
    float vetor[10];

    for (int i = 0; i < 10; i++) {
        printf("Valor da posição %d: ", i);
        scanf("%f", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        printf("\nValor na posição %d: %f", i, vetor[i]);
        printf("\nEndereço da poição %d: %p", i, &vetor[i]);
    }

    return 0;
}