/*

1. Faça um programa em C que leia um número real e calcule o quadrado deste número. 
Ao final, o programa deve imprimir o resultado do cálculo.

*/


#include <stdio.h>

int main() {
    float num, result;
    printf("Informe um número: ");
    scanf("%f", &num);
    result = num * num;
    printf("\nO quadrado deste número é: %.2f", result);
    return 0;
}