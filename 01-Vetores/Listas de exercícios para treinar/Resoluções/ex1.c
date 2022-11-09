/*
1. Faça um programa em C que armazene 15 números inteiros em um vetor e depois permita que 
o usuário digite um número inteiro para ser buscado no vetor. Se for encontrado o
programa deve imprimir a posição desse número no vetor, caso contrário, deve imprimir 
a mensagem: "Nao encontrado!"
*/

#include <stdio.h>

int main() {
    const int tamanhoVetor = 15;
    int v[tamanhoVetor], valorBusca, aux = 0;

    printf("\nInicie a digitação dos valores do vetor...\n");

    for(int i = 0; i < tamanhoVetor; i++) {
        printf("Informe o valor da posição %d: ", i);
        scanf("%d", &v[i]);
    }

    printf("\nQual valor você quer buscar? ");
    scanf("%d", &valorBusca);

    for(int i = 0; i < tamanhoVetor; i++) {
        if(v[i] == valorBusca) {
            printf("\nValor encontrado na posição %d\n", i);
            aux++;
        }
    }

    if(aux == 0) {
        printf("\nNão encontrdo!");
    } else {
        printf("\nEncontrei %d valor(es)!", aux);
    }

    return 0;
}

