/*
    3. Entrar com valores para uma matriz C (2x3). Gerar e 
    imprimir a C tramsposta. A matriz transposta é gerada 
    trocando linha por coluna. 
*/

#include <stdio.h>

int main() {

    //variáveis necessárias:
    int C[2][3], t[3][2];

    //leitura da matriz C...:
    printf("Informe os valores da Matriz C...:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Valor (%d, %d): ", (i + 1), (j + 1));
            scanf("%d", &C[i][j]);
        }
    }

    //transposição (processamento):
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            t[j][i] = C[i][j];
        }
    }

    //impressão das matrizes:
    //Matriz C:
    printf("\nMATRIZ C:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d \t", C[i][j]);
        }
        printf("\n");
    }

    //Matriz transposta:
    printf("\nMATRIZ TRANSPOSTA:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d \t", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}