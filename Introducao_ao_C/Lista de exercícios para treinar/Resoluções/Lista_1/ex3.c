/*
3. Faça um programa em C que leia a base e altura de um retângulo e 
imprima o perímetro (2base + 2altura) e a área (base * altura).
*/

#include <stdio.h>

int main() {
    float base, altura, perimetro, area;
    //leitura dos dados
    printf("\nInforme a base: ");
    scanf("%f", &base);
    printf("\nInforme a altura: ");
    scanf("%f", &altura);
    //cálculos
    perimetro = (2 * base) + (2 * altura);
    area = base * altura;
    //exibição
    printf("\nO perímetro deste retângulo é %.2f", perimetro);
    printf("\nA área deste retângulo é %.2f", area);
    return 0;
}