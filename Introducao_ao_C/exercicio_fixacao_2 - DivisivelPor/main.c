/*
    Exercício de Fixação 2
    Crie um programa que seja capaz de ler dois valores inteiros
    Em seguida deve-se exibir a divisão e o resto (primeiro pelo 
    segundo) e AINDA, mostrar se são divisíveis, ou seja, se o 
    resto for 0, portanto os valores são divisíveis.
    Lembre-se que não existe divisão por zero!
*/

#include <stdio.h>

int main() {
    
    //declaração de tudo que precisaremos:
    int a, b, divisao, resto;

    //leitura dos valores:
    printf("Informe o divisor: ");
    scanf("%d", &a);

    printf("\nInforme o dividendo: ");
    scanf("%d", &b);

    //verifica se o dividendo é zero (não pode):
    if(b == 0) {
        printf("\nNão existe divisão por zero!");
        return 0;
    }

    //realização dos cálculos:
    divisao = a / b;
    resto = a % b;

    //exibição dos resultados:
    printf("\nA divisão é = %d", divisao);
    printf("\nO resto é = %d", resto);

    //verifica se a é divisível por b:
    if(resto == 0) {
        printf("\n%d é divisível por %d", a, b);
    } else {
        printf("\n%d não é divisível por %d", a, b);
    }

    return 0;
}