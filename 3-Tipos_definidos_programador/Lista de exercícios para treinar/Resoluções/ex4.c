/*
    4. Crie uma estrutura chamada retângulo. Essa estrutura deverá conter o ponto 
    superior esquerdo e o ponto inferior direito do retângulo. Cada ponto é definido
    por uma estrutura Ponto, a qual contém as posições X e Y. Faça um programa que 
    declare e leia uma estrutura retângulo e exiba a área, o comprimento da 
    diagonal e o perímetro desse retângulo.
*/

#include <stdio.h>
#include <math.h>

struct ponto {
    int x, y;
};

struct retangulo {
    struct ponto pA;
    struct ponto pB;
};

typedef struct retangulo Retangulo;

int main() {

    Retangulo retangulo;
    float area, perimetro, diagonal, base, altura;

    //leitura dos dados
    printf("Informe o ponto X do canto SUPERIOR ESQUERDO: ");
    scanf("%d", &retangulo.pA.x);

    printf("Informe o ponto Y do canto SUPERIOR ESQUERDO: ");
    scanf("%d", &retangulo.pA.y);
    
    printf("\n");

    printf("Informe o ponto X do canto INFERIOR DIREITO: ");
    scanf("%d", &retangulo.pB.x);

    printf("Informe o ponto Y do canto INFERIOR DIREITO: ");
    scanf("%d", &retangulo.pB.y);

    //calculos
    //d = RAIZ((QUADRADO(XB - XA) + QUADRADO(YB + YA)))
    base = sqrt(pow(retangulo.pB.x - retangulo.pA.x, 2) + 
        (pow(retangulo.pB.y - retangulo.pB.y, 2)));

    altura = sqrt(pow(retangulo.pA.x - retangulo.pA.x, 2) + 
        (pow(retangulo.pA.y - retangulo.pB.y, 2)));

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(pow(retangulo.pB.x - retangulo.pA.x, 2) +
        pow(retangulo.pB.y - retangulo.pA.y, 2));

    //exibição
    printf("\nBase = %.2f", base);
    printf("\nAltura = %.2f", altura);
    printf("\nÁrea = %.2f", area);
    printf("\nPerímetro = %.2f", perimetro);
    printf("\nDiagonal = %.2f", diagonal);

    return 0;
}
