#include <stdio.h>

double fatorial(int n) {
    double fat = 1;
    for (int i = n; i >= 1; i--) {
        fat *= i;
    }

    return fat;
}

int main() {
    int n;

    printf("Informe o valor a se calcular o fatorial: ");
    scanf("%d", &n);

    printf("\n%d! = %E", n, fatorial(n));

    return 0;
    return 0;
}