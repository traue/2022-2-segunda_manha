#include <stdio.h>
#include <stdlib.h>

int main() {

    int *p;
    p = (int *)malloc(10 * sizeof(int)); //aloca em Bytes um espaço na memória
    if (p == NULL) {
        printf("Espaço insuficiente!");
        exit(1);
    }

    for (int i = 0; i < 10; i++) {
        printf("Informe um valor: ");
        scanf("%d", &p[i]);
    }

    free(p); //libera o espaço da memória do ponteiro

    return 0;
}