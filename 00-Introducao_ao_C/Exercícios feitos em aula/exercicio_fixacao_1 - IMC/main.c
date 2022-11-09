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

int main(void)
{

    // Leitura do peso
    printf("Informe o peso: ");
    float peso;
    scanf("%f", &peso);

    // Leitura da altura
    printf("\nInforme a altura: ");
    float altura;
    scanf("%f", &altura);

    // Calculo do resultado (IMC)
    float imc = peso / (altura * altura);

    printf("IMC = %.2f\n", imc);

    // contribuição do Dereck (classificação):
    if (imc < 18.5)
    {
        printf("abaixo do peso\n");
    }
    else if (imc < 24.9)
    {
        printf("peso normal\n");
    }
    else if (imc < 29.9)
    {
        printf("excesso de peso\n");
    }
    else if (imc < 34.9)
    {
        printf("obesidade classe 1\n");
    }
    else if (imc < 39.9)
    {
        printf("obesidade classe 2\n");
    }
    else
    {
        printf("obesidade classe 3\n");
    }

    return 0;
}