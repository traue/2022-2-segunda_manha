/*
    Faça um programa em C que imprima uma matriz 
    de 4 linhas por 4 colunas, sendo que na 
    primeira linha devem ser impressos os 
    valores de 1 à 4 e partir da segunda linha, 
    os valores impressos devem ser múltiplos da 
    linha anterior.

    Assim:
    |   1   2   3   4   |
    |   2   4   6   8   |
    |   3   6   9   12  |
    |   4   8   12  16  |

    Sem utilizar vetores (ainda não vimos rsrs)
    Somente loops for "aninhados"
*/


#include <stdio.h>

int main() {
    for(int i = 1; i <= 4; i++) {
        for(int j = 1; j <= 4; j++) {
            if(j < 4) {
                printf("%d \t", j * i);
            } else {
                printf("%d \n", j * i);
            }
        }
    }
    return 0;
}