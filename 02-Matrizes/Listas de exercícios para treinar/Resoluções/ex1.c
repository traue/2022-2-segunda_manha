/*
    1. Faça um programa que leia os elementos de uma matriz do tipo 
    inteiro com tamanho 3 X 3 e imprima os elementos multiplicando 
    por 2.
*/

#include <stdio.h>

int main() {

    int m[3][3];
    printf("Comece a informar os valores da matriz...:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Valor da posição %d - %d: ", (i + 1), (j + 1));
            scanf("%d", &m[i][j]);
            m[i][j] *= 2; //é o mesmo que m[i][j] = m[i][j] * 2;
        }
    }

    printf("Valor infromados multiplocados por 2...:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d \t", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}   