/*  Faça um programa que receba dois valores inteiros, 
após receber esses dois valores, uma função deve calcular 
e retornar para o programa o resultado da soma e da subtração dos valores. 
Obs.: Apenas uma função deve realizar esta operação, desta forma, faça uso de ponteiros. */


#include <stdio.h>

int *somar(int v1,  int v2) {
    int *soma;
    *soma = v1 + v2;
    return soma;
}

int *subtrair( int v1,  int v2) {
    int *subtração;
    *subtração = v1 - v2;
    return subtração;
}

int main() {
    int a,b;

    printf("Informe o primeiro valor: ");
    scanf("%d", &a);

    printf("\nInforme o segundo valor: ");
    scanf("%d", &b);

    printf("\nSoma = %d", *somar(a, b));
    printf("\nSubtração = %d\n", *subtrair(a,b));

    return 0;
}