/*
    Exercício de fixação 1:
     Criar uma calculada IMC em C
     Lembre-se que IMC = Índice de Massa Corporal
     Fórumla: IMC = peso / (altura * altura)
     Objetivo: Ler o PESO e a ALTURA. Mostrar o IMC
     Plus: Mostrar também a classificação
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

    //Leitura do peso
    printf("Informe o peso: ");
    float peso;
    scanf("%f", &peso);

    //Leitura da altura
    printf("\nInforme a altura: ");
    float altura;
    scanf("%f", &altura);

    //Calculo do resultado (IMC)
    float imc = peso / (altura * altura);

    printf("IMC = %.2f\n", imc);
    
    return 0;
}