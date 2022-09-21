/*
    6. Faça um programa que leia os catetos (dois catetos) de um 
    triângulo retângulo e imprima a hipotenusa. Para fazer o cálculo,
    implemente uma função. Utilize a fórmula a seguir.

        h = RAIZ(QUADRADO(cateto1) + QUADRADO(cateto2)
        OU a² + b² = c²
*/

#include <stdio.h>
#include <math.h>

float hipotenusa(float catetoAdjacente, float catetoOposto) {
    return sqrt(pow(catetoAdjacente, 2) + pow(catetoOposto, 2));
}

int main() {

    float adjacente, oposto;

    printf("Digite o cateto adjacente: ");
    scanf("%f", &adjacente);

    printf("Digite o cateto oposto: ");
    scanf("%f", &oposto);

    printf("\nA hipotenusa = %.3f", hipotenusa(adjacente, oposto));

    return 0;
}