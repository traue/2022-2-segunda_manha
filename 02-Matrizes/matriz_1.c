//trabalhando com matrizes...

#include <stdio.h>

int main() {
    //a declação de matrizes é feita como vetores "duplos":
    
    int matriz[3][4];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Valor da posição i = %d, j = %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}