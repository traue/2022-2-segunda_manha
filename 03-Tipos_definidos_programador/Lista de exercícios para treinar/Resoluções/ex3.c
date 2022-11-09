/*
    3. Crie uma estrutura para representar as coordenadas de um ponto no plano
    (posições X e Y). Em seguida, declare e leia do teclado dois pontos e exiba a 
    distância entre eles, considere a mesma fórmula do exercício anterior.
*/


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct ponto {
    int x;
    int y;
};

int main() {
    struct ponto pA, pB;
    float distancia;

    printf("Do ponto A, Informe o ponto X: ");
    scanf("%d", &pA.x);

    printf("Do ponto A, Informe o ponto Y: ");
    scanf("%d", &pA.y);

    printf("Do ponto B, Informe o ponto X: ");
    scanf("%d", &pB.x);

    printf("Do ponto B, Informe o ponto Y: ");
    scanf("%d", &pB.y);

    //d = RAIZ((QUADRADO(XB - XA) + QUADRADO(YB + YA)))
    distancia = sqrt(pow(pB.x - pA.x, 2) + pow(pB.y - pA.y, 2));

    printf("\nA distância do poto de origem A(%d,%d) até B(%d, %d) é: %.2f",
        pA.x, pA.y, pB.x, pB.y, distancia);

    return 0;

}
