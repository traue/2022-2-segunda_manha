#include <stdio.h>

typedef int inteiro;
typedef float real;
typedef char caractere;

int main() {

    inteiro idade = 10;
    real altura = 1.90;
    caractere primeiraLetra = 'S';

    printf("\nA pessoa tem %d anos!", idade);
    printf("\nA pessoa tem %.2fm de altura!", altura);
    printf("\nA primeira letra do nome da pessoa é %c", primeiraLetra);

    return 0;
}