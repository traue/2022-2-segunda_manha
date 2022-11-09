/*
  Elabore um programa que leia um valor do tipo inteiro e, por meio de função,
  atualize todas as posições de um vetor com o número inteiro lido, depois
  imprima os valores. Utilize ponteiros para as operações.
*/

#include <stdio.h>

// Função pra alterar os valores do array
void subs(int n, int *vet) {
  for (int i = 0; i < 3; i++) {
    vet[i] = n;
  }
}

int main() {
  // Declaração das variáveis
  int n, vetor[3];

  // Captura dos dados
  printf("Informe o valor de N: ");
  scanf("%d", &n);

  // Chamada da função para substituir os valores do array por N
  subs(n, vetor);

  // Impressão do array
  for (int i = 0; i < 3; i++) {
    printf("Vet[%d]: %d\n", i, vetor[i]);
  }

  return 0;
}