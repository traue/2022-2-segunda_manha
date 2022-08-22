/*
4. Faça um programa em C que leia um número e imprima uma das mensagens:
 "Maior do que 20", "Igual a 20" ou "Menor do que 20".
*/


#include <stdio.h>

int main() {
    int valor;
    printf("\nInforme o valor: ");
    scanf("%d", &valor);

    if(valor > 20)
        printf("\nÉ maior que 20!");
    else if(valor == 20)
        printf("\nÉ igual a 20!");
    else
        printf("\nÉ menor que 20!");
        
    return 0;
}