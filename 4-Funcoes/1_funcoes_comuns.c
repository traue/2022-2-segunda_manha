/**
    como já vimos, o C possui DIVERSAS funções prontas, exemplos:
    scanf, printf, main ... 

    Em suma uma função é util quando identificamos trechos de códigos que, em geral, 
    poderão ser REUTILIZADOS em vários trechos de nosso código-fonte. Servem para facilitar
    a vida do programador e organizar melhor o código-fonte.

    Vamos, inicialmentr trabalhar com algumas funções matemáticas prontas...
 */


#include <stdio.h>
#include <math.h>

int main() {

    float numero, raiz, potencia;
    int expoente;

    printf("Informe um número: ");
    scanf("%f", &numero);

    printf("Informe um expoente: ");
    scanf("%d", &expoente);

    //para calcular a raíz quadrada usamos o "sqrt" = Square Root
    raiz = sqrt(numero); 

    //potenciação em C...:
    //potencia = pow(numero, 2); //esse "2" é a potenciação
    potencia = pow(numero, expoente); //o número lido eledado ao expoente lido

    printf("\nA raíz deste número é %.2f", raiz);
    printf("\nEste número elevado a %d é %f", expoente, potencia);

    return 0;
}