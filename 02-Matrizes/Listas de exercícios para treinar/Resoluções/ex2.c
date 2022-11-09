/*
    2. Faça um programa que permita entrar com valores em 
    uma matriz A de tamanho 3 X 4. Gerar e imprimir uma matriz 
    B que é o triplo da matriz A.
*/

#include <stdio.h>

int main() {

    //variáveis necessárias (matrizes A e B)
    int A[3][4], B[3][4];

    //Leiutra e processamento
    printf("Comece a informar os valores da matriz...:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            printf("Informe o valor da posição (%d - %d): ", 
                (i + 1), (j + 1));
            scanf("%d", &A[i][j]);
            B[i][j] = A[i][j] * 3;
        }
    }

    //Impressão:
    printf("\nMATRIZ A:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%d \t", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMATRIZ B:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%d \t", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}