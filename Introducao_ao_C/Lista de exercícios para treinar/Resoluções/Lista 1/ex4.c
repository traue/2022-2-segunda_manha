/*
4. Faça um programa em C que calcule o reajuste do salário de um funcionário. 
Para isso, o programa deverá ler o salário atual do funcionário e ler o percentual de reajuste. Ao final imprimir o valor do novo salário.
*/

#include <stdio.h>

int main() {
    float salarioAtual, percReajuste, novoSalario;
    printf("\nInforme o valor do salário do funcionário: ");
    scanf("%f", &salarioAtual);
    printf("\nInforme o percentual de reajuste: ");
    scanf("%f", &percReajuste);
    novoSalario = salarioAtual + (salarioAtual * (percReajuste / 100));
    printf("Valor do novo salário: %.2f", novoSalario);
    return 0;
}