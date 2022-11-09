/*
    Faça um programa em C que calcule por meio de uma função 
    recursiva, A * B usando a adição em que A e B são inteiros 
    não negativos
*/

#include <stdio.h>

float calculaMultiplicacao(int a, int b) {
    if (b > 0) {
        return a + calculaMultiplicacao(a, b - 1);
    } else {
        return 0;
    }
}

int main() {
    int a, b;
    float resultado;

    printf("Informe o A: ");
    scanf("%d", &a);

    printf("Informe o B: ");
    scanf("%d", &b);

    printf("Resultado da multiplicação por soma: %f", 
        calculaMultiplicacao(a, b));

    return 0;
}


//a = 4
//b = 3

//é o mesmo 4 + 4 + 4 = 12

//a = 3
//b = 4
// é o mesmo que 3 + 3 + 3 + 3 = 12