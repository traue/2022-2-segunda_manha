/*
4. Crie uma estrutura chamada retângulo. Essa estrutura deverá conter o ponto  superior esquerdo e o ponto inferior direito do retângulo. Cada ponto é definido por uma estrutura Ponto, a qual contém as posições X e Y. Faça um programa que  declare e leia uma estrutura retângulo e exiba a área, o comprimento da  diagonal e o perímetro desse retângulo.
*/
// area = b * h
// diametro = sqrt(pow(b) + pow(h))
// perímetro = 2 * (b + h)

#include <stdio.h>
#include <math.h>

struct retangulo{
  int ls, ri;
};
typedef struct retangulo Retangulo;

struct ponto{
 int x, y;
};
typedef struct ponto Ponto;


int main(){
  Retangulo ret1;
  printf("Declarando seu retângulo...");
  printf("\nInforme o lado superior esquerdo do seu retângulo: ");
  scanf("%d", &ret1.ls);

  printf("Informe o lado inferior direito do seu retângulo: ");
  scanf("%d", &ret1.ri);

  Ponto p1;
  p1.x = ret1.ri;
  p1.y = ret1.ls;
  int area, per;
  float d;

  // calculando área, diâmetro e perímetro
  area = p1.x * p1.y;
  d = sqrt(pow(p1.x, 2) + pow(p1.y, 2));
  per = 2 * (p1.x + p1.y);

  printf("\nA área desse retângulo é: %d", area);
  printf("\nA diagonal desse retângulo é: %.2f", d);
  printf("\nO perímetro desse retângulo é: %d", per);
  
  
  return 0;
}
