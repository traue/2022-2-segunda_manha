/*
Construa uma função que,recebendo como parâmetros quatro números inteiros,
devolva ao módulo que o chamou os dois maiores números dentre os quatro
recebidos. Faça um programa que leia tantos conjuntos de quatro valores quantos
o usuário deseje e que acione a função para cada conjunto de valores,
apresentando a cada vez os dois maiores números. Se preferir, utilize vetor para
armazenar o conjunto de valores.
*/

#include <stdio.h>

void maior(int range, int *vet, int *maior_1, int *maior_2) {
  // Obtém o maior número do vetor
  *maior_1 = vet[0];
  
  for (int i = 1; i < range; i++) {
    if (*maior_1 < vet[i]) {
      *maior_1 = vet[i];
    }
  }
  
  // Obtem o segundo maior número do vetor
  *maior_2 = vet[0];
  
  for (int i = 1; i < range; i++) {
    if(vet[i] == *maior_1) { 
      *maior_1 = *maior_1;             // "gamb" pra pular o maior número
    } else if (*maior_2 < vet[i]) {
      *maior_2 = vet[i];
    }
  }
}

int main() {
  int range;

  printf("Quandos valores deseja inserir? -> ");
  scanf("%d", &range);

  int vet[range], maior_1, maior_2;

  for (int i = 0; i < range; i++) {
    printf("%dº valor: ", (i + 1));
    scanf("%d", &vet[i]);
  }

  maior(range, vet, &maior_1, &maior_2);

  printf("\nMaior número da sequência: %d", maior_1);
  printf("\nSegundo maior número da sequência: %d", maior_2);

  return 0;
}