/*
4. Faça um programa que leia um vetor vet de 10 elementos e obtenha um vetor w cujos
componentes são os fatoriais dos respectivos componentes de vet.
*/

#include <stdio.h>

int main() {
    int vet[10], w[10], fatorial = 1;

    printf("Vamos iniciar a digitação dos valores...: \n");
    for (int i = 0; i < 10; i++) {
        printf("Valor %d: ", i);
        scanf("%d", &vet[i]);

        fatorial = 1;
        if(vet[i] == 1) {
            w[i] = 1;
        } else {
            for (int j = 1; j < vet[i]; j++) {
                fatorial *= j + 1;
            }
            w[i] = fatorial;
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("\nPosição %d: Valor: %d, Fatorial: %d", i, vet[i], w[i]);
    }

    return 0;
}  