#include <stdio.h>

int multiplica(int *multiplicando, int *multiplicador) {
    int resultado = 0;

    for (int i = 1; i <= *multiplicando; i++) {
        resultado += *multiplicador;
    }

    return resultado;
}

int main() {

    int multiplicando, multiplicador, resultado;

    printf("Informe o multiplicando: ");
    scanf("%d", &multiplicando);

    printf("Informe o multiplicador: ");
    scanf("%d", &multiplicador);

    resultado = multiplica(&multiplicando, &multiplicador);

    printf("O resultado é %d", resultado);

    return 0;
}