/*
    1. Faça um programa em C que leia três números e, para cada um,
    imprimir odobro. O cálculo deverá ser realizado por uma função e 
    o resultado impresso ao final do programa.
*/

#include <stdio.h>

void dobroNumero(int n1, int n2, int n3);

int main() {

    //variáveis que serão dobradas (entradas)
    int num1, num2, num3;  

    //entradas de dados
    printf("Digite 3 valores: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    //chamada da função que dobra o valor
    dobroNumero(num1, num2, num3);

    return 0;
}

void dobroNumero(int n1, int n2, int n3) {
    printf("\nO dobro de %d é %d", n1, (n1 * 2));
    printf("\nO dobro de %d é %d", n2, (n2 * 2));
    printf("\nO dobro de %d é %d", n3, (n3 * 2));
}