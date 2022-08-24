/*
2. Faça um programa em C que imprima todos os números pares de 100 até 1.
*/

#include <stdio.h>

int main() {
    //solução 1:
    for(int i = 100; i >= 1; i-=2) {
        printf("%d \n", i);
    }

    //solução 2:
    for(int i = 100; i >= 1; i--) {
        if(i % 2 == 0)
            printf("%d \n", i);
    }

    return 0;
}