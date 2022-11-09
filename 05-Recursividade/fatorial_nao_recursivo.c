#include <stdio.h>
#include <time.h>

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

    clock_t begin = clock();
    printf("\n%d! = %E", n, fatorial(n));
    clock_t end = clock();

    double tempo_total = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("\nEssa execução demorou: %f", tempo_total);

    return 0;
}