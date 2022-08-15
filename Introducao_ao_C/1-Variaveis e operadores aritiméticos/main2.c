#include <stdio.h>
#include <locale.h>

int main() {
    int a = 32;
    int b = 5;

    int divisao = a / b; //neste caso, divisão inteira
    int resto = a % b; //resto da divisão

    printf("A divisão de %d e %d = %d", a, b, divisao);
    printf("\nO resto da divisão de %d e %d = %d", a, b, resto);

    return 0;
}
