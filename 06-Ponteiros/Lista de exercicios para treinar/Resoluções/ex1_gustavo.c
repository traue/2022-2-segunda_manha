/*
  Crie um programa que contenha um vetor de inteiros com tamanho 5.
  Utilizando apenas ponteiros, leia valores e armazene neste vetor e após isso, imprima o dobro de cada valor lido.
*/

#include <stdio.h>

int dobro (int val) {
  val *= 2;
  return val;
}

int main() {
  int vet[5];
  int *val;

  val = vet;
  
  printf("Informando valores:\n");
  for (int i = 0; i < 5; i++) {
    printf("%dº valor: ", (i + 1));
    scanf("%d", &val[i]);
  }

  for (int i = 0; i < 5; i++){
    printf("\n%d", dobro(val[i]));
  }
  
  return 0;
}