/*
7. Construa um programa que leia o percurso em quilómetros, 
o tipo do carro e informe o consumo estimado de combustível, 
sabendo-se que um carro tipo A faz 12km com um litro de 
gasolina, umtipo B faz 9km e o tipo C, 8km por litro.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //declaração das variáveis:
    float distancia, consumo;
    char tipoCarro;

    //leitura dos dados:

    printf("\nQual o tipo de carro? < A | B | C >: ");
    scanf("%c", &tipoCarro);

    printf("\nInforme a distância a percorrer (em KM): ");
    scanf("%f", &distancia);

    //calculos
    switch(tipoCarro) {
        case 'A':
            consumo = distancia / 12;
            break;
        case 'B':
            consumo = distancia / 9;
            break;
        case 'C':
            consumo = distancia / 8;
            break;
        default:
            consumo = 0;
            printf("Tipo de veículo inválido!");
            break;
    }

    printf("Consumo estimado: %.2fL", consumo);

    return 0;
}