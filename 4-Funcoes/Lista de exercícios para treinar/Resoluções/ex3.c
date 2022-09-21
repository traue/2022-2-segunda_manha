/*
    3. Faça um programa em C que leia o valor de um ângulo em graus e 
    o converta, utilizando uma função, para radianos e ao final 
    imprima o resultado. Fórumula de conversão:

        rad = (angulo X pi) / 180

        Considere pi = 3.14
*/

#include <stdio.h>

float calculaRadiano(int angulo) {
    return (angulo * 3.14) / 180;
}

int main() {
    
    int angulo;

    printf("\nInforme um ângulo em graus: ");
    scanf("%d", &angulo);
    printf("\nÂngulo em radianos: %.2f", calculaRadiano(angulo));

    return 0;
}