#include <stdio.h>

int funcao_misteriosa(int n) {
    int resultado = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < 2; j++) {
            resultado += i * j;
        }
    }
    return resultado;
}

int main() {

    int n;
    printf("Informe um valor: ");
    scanf("%d", &n);

    int resultado = funcao_misteriosa(n);

    printf("Resultado = %d", resultado);

    return 0;
}