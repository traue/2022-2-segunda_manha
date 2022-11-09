/*
    2. Faça um programa em C que leia 15 números inteiros e imprima a lista de valores informando 
    se cada posição armazena um valor PAR ou ÍMPAR
*/

#include <stdio.h>

int main() {
    int tamanhoVetor = 15;
    int v[tamanhoVetor];

    printf("Inicie a digitação de %d valores...\n", tamanhoVetor);
    for (int i = 0; i < tamanhoVetor; i++) {
        printf("Informe o valor daposição %d: ", (i + 1));
        scanf("%d", &v[i]);
    }

    printf("\nAgora vamos checar o que é par ou ímpar...\n");

    for (int i = 0; i < tamanhoVetor; i++) {
      if(v[i] % 2 == 0) {
        printf("\t\nO valor %d, da posição %d é PAR", v[i], (i+1));
      } else {
        printf("\t\nO valor %d, da posição %d é ÍMPAR", v[i], (i+1));
      }
    }
    return 0;
}