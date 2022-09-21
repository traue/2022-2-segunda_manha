/*
    2. Faça um programa que receba as notas de três provas e calcule a
    média. Para o cálculo, escreva uma função. O programa deve 
    imprimir a média ao final.
*/

#include <stdio.h>

float calculaMedia(float nota1, float nota2, float nota3) {
    return (nota1 + nota2 + nota3) / 3;
}

int main() {

    float n1, n2, n3;

    printf("Digite as três notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    
    printf("\nA média é %.2f", calculaMedia(n1, n2, n3));

    return 0;
}