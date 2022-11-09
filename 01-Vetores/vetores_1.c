//faremos um programa bem simples que calcula a média de 4 idades

#include <stdio.h>

int main() {
    int idades[4]; //vetor com 4 posições

    //para atribuir valroes, basta acessar a posição e atribuir:
    idades[0] = 19; //1ª posição
    idades[1] = 35; //2ª posição
    idades[2] = 18; //3ª posição
    idades[3] = 20; //4ª posição

    //não podemos pois o vetor declarado possui tamanho máximo 4 (0..3)
    //idades[4] = 21;

    //para acessar valores dentro de um vetor, basta acessar diretamente 
    //a posição desejada
    //impressão das idades:
    printf("Idades: %d, %d, %d, %d \n", 
        idades[0], idades[1], idades[2], idades[3]);

    //da mesma forma se formos utilizar os valores para alguma manipulação:
    float mediaIdades = 0;
    mediaIdades += (idades[0] + idades[1] + idades[2] + idades[3]) / 4;
    printf("\nA média das idades é: %.2f", mediaIdades);

    return 0;
}