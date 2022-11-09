/*
2.  Faça um programa em C que leia um valor e verifique se é múltiplo de 3.
*/

//o resto da divisão por 3 deve ser ZERO
//      9 / 3 = 3; R: 0
//      10 / 3 = 3; R: 1 (ou 3,33333)
//      21 / 3 = 7; R: 0
//      26 / 3 = 8; R: 2
//  O resto de qualquer divisão vai de 0 até o divisor - 1


#include <stdio.h>

int main() {
    int valor;
    printf("Informe o valor: ");
    scanf("%d", &valor);
    if(valor % 3 == 0) //módulo
        printf("\nÉ multiplo de 3!");
    else
        printf("\nNão é multiploo de 3!");
    return 0;
}
