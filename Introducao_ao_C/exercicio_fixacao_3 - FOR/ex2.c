/*
    Faça um programa em C que imprima todos os 
    valores pares entre 1 e 20.
    Use "módulo"
*/

#include <stdio.h>

int main() {
    for(int i = 1; i <= 20; i++) {
        if(i % 2 == 0) {
            printf("Número par: %d \n", i);
        }
    }
    return 0;
}