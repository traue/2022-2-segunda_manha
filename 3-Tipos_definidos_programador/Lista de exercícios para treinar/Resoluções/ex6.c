/*
    Usando a estrutura retângulo do exercício 4, faça um programa que
    declare e leia uma estrutura retângulo e um ponto, e informe se
    esse ponto está ou não dentro do retângulo.
*/


#include <stdio.h>

struct ponto {
    int x, y;
};

struct retangulo {
    struct ponto pA;
    struct ponto pB;
};

int main() {

    //variáveis
    struct ponto p; //o ponto a ser verificado
    struct retangulo ret; //a estrutura do retângulo

    //leituras

    //retangulo
    printf("Do retângulo, informe a coordenada X do ponto SUPERIOR ESQUERDO: ");
    scanf("%d", &ret.pA.x);

    printf("Do retângulo, informe a coordenada Y do ponto SUPERIOR ESQUERDO: ");
    scanf("%d", &ret.pA.y);

    printf("\nDo retângulo, informe a coordenada X do ponto INFERIOR DIREITO: ");
    scanf("%d", &ret.pB.x);

    printf("Do retângulo, informe a coordenada Y do ponto INFERIOR DIREITO: ");
    scanf("%d", &ret.pB.y);

    //ponto a ser verificado
    printf("\nInforme a coordenada X do ponto a ser verificado: ");
    scanf("%d", &p.x);

    printf("Informe a coordenada Y do ponto a ser verificado: ");
    scanf("%d", &p.y);

    //análise 1 (se o ponto estiver sobre as retas do retângulo => Está dentro)
    printf("\nConsiderando que está dentro se o ponto estiver sobre as retas...:");
    if (p.x >= ret.pA.x && p.x <= ret.pB.x && p.y >= ret.pB.y && p.y <= ret.pA.y) {
        printf("\nO ponto está dentro do retângulo!");
    } else {
        printf("\nO ponto está fora do retângulo!");
    }

    //análise 2 (se o ponto estiver sobre as retas do retângulo => Está fora)
    printf("\nConsiderando que está fora se o ponto estiver sobre as retas...:");
    if (p.x > ret.pA.x && p.x < ret.pB.x && p.y > ret.pB.y && p.y < ret.pA.y) {
        printf("\nO ponto está dentro do retângulo!");
    } else {
        printf("\nO ponto está fora do retângulo!");
    }

    return 0;
}