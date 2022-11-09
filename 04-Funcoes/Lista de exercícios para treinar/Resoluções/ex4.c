/*
    4. Faça um programa que calcule e imprima o fatorial de um número,
    usandouma função que receba um valor e retorne o fatorial desse 
    valor.
*/

#include <stdio.h>

double fatorial(int n) {
    double fat = 1;

    for (int i = 2; i <= n; i++) {
        fat *= i;
    }

    return fat;
}


int main() {
    
    int n;

    printf("Informe o valor a se calcular o fatorial: ");
    scanf("%d", &n);

    printf("\n%d! = %E", n, fatorial(n));

    return 0;

}