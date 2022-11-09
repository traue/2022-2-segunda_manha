#include <stdio.h>
#include <time.h>

double fatorial(int n) {
    if(n == 1) { 
        printf("\nretornando 1...\n");
        return 1;
    }
    else {
        printf("\nEstou chamando o fatorial de %d\n", n - 1);
        return n * fatorial(n - 1);
    }
}

int main() {

    int num;
    printf("Informe o número para o calculo do fatorial: ");
    scanf("%d", &num);

    clock_t begin = clock();
    printf("%d! = %E", num, fatorial(num));
    clock_t end = clock();

    double tempo_total = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("\nEssa execução demorou: %f \n", tempo_total);

    return 0;
}