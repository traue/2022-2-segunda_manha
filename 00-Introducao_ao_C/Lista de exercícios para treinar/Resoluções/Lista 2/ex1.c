/*
1. Faça um programa em C que leia dois valores numéricos inteiros e efetue a adição. 
Caso o resultado seja maior que 10, apresentá-lo.
*/

#include <stdio.h>

int main() {
    int n1, n2, soma;
    printf("\nInforme o primeiro número: ");
    scanf("%d", &n1);
    printf("\nInforme o segundo número: ");
    scanf("%d", &n2);
    soma = n1 + n2;
    if(soma > 10)
        printf("\nSoma: %d", soma);
    return 0;
}