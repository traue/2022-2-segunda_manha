/*
2. Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). Em seguida, declare e leia do teclado um ponto, calcule exiba a distância dele até a origem das coordenadas, isto é, posição (0, 0). 
Para realizar o cálculo, utilize a fórmula de distância euclidiana:

    d = RAIZ((QUADRADO(XB - XA) + QUADRADO(YB + YA)))
    (vide imagem na pasta)

    Onde:
        - d = Distância entre os pontos A e B
        - X = coordenada X em um ponto
        - Y = coordenada Y em um ponto
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct ponto{
  int xa, xb, ya, yb;
};

typedef struct ponto Ponto;

int main(){
  float d;
  Ponto po1;
  po1.xb = 0;
  po1.yb = 0;
  
  printf("Digite a coordenada X do seu ponto no plano cartesiano: ");
  scanf("%d", &po1.xa);

  printf("Digite a coordenada Y do seu ponto no plano cartesiano: ");
  scanf("%d", &po1.ya);

  d = sqrt(abs((int)pow(po1.xb - po1.xa, 2) + abs((int)pow(po1.yb - po1.ya, 2))));

  printf("\nA distância de (%d, %d) para os pontos de origem (0, 0) "
    "no plano cartesiano é de: %.2f.", po1.xa, po1.ya, d);
  
  return 0;
}