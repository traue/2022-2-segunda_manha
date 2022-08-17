/*
    Faça um programa em C que imprima todos os 
    valores entre 0 e 100 múltiplos de 10.

    Dica: Tente não usar módulo (resto de divisão) 
*/

#include <stdio.h>

int main() {
    
    for(int i = 0; i <= 100; i+=10) {
        printf("Múltiplo de 10: %d \n", i);
    }

    return 0;
}
