/*
3. Faça um programa em C que leia um número e informe se ele é divisível por 3 E por 7.
*/


#include <stdio.h>

int main() {
    int valor;
    printf("Informe o valor: ");
    scanf("%d", &valor);
    if((valor % 3 == 0) && (valor % 7 == 0))
        printf("\nÉ multiplo de 3 e de 7!");
    else
        printf("\nNão é multiploo de 3 ou 7!");
    return 0;
}
