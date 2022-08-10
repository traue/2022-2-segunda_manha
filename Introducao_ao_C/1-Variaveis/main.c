#include <stdio.h>

int main(void) {
        
    //float significa flutuante, ou seja variáveis de "ponto que flutua"
    printf("Informe o primeiro valor: ");    
    float a;
    scanf("%f", &a);

    printf("\nInforme o segundo valor: ");
    float b;
    scanf("%f", &b);


    float soma = a + b;
    float subtracao = a - b;
    float multiplicacao = a * b;
    float divisao = a / b; 

    printf("A soma de %.2f e %.2f = %.2f\n", a, b, soma);
    printf("A subtração de %.2f e %.2f = %.2f\n", a, b, subtracao);
    printf("A multiplicação de %f e %f = %.2f\n", a, b, multiplicacao);
    printf("A divisão de %.2f e %.2f = %.2f\n", a, b, divisao);

    return 0;

    //%.2f = duas casas decimais
    /*
        outros tipos de variáveis em C: https://www.pucsp.br/~so-comp/cursoc/aulas/c320.html  
    */
}