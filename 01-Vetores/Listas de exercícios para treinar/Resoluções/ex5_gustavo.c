/*
5. Construa um programa que leia dados para um vetorde 100 elementos inteiros.
Imprimir o maior e o menor, sem ordenar, o percentual de números pares e a média
dos elementos do vetor.
*/

#include <stdio.h>

int main(void) {
  int elemento[5], maior, menor, med, medControle=0;
  float perc, controle = 0;

  for (int i = 0; i < 5; i++) {
    printf("Informe o %dº elemento: ", (i + 1));
    scanf("%d", &elemento[i]);
  }

  maior = elemento[0];

  for (int i = 0; i < 5; i++) {
    if (maior < elemento[i]) {
      maior = elemento[i];
    }
  }
  printf("\nMaior elemento %d.", maior);

  menor = elemento[0];

  for (int i = 0; i < 5; i++) {
    if (menor > elemento[i]) {
      menor = elemento[i];
    }
  }
  printf("\nMenor elemento: %d.", menor);

  for (int i = 0; i < 5; i++) {
    if (elemento[i] % 2 == 0) {
      controle++;
    }
  }
  perc = (controle / 5) * 100;
  printf("\nPercentual de números pares: %.2f%%.", perc);

  for(int i = 0; i < 5; i++){
    medControle += elemento[i];
  }
  med = medControle/5;
  printf("\nMédia dos elementos do vetor: %d.", med);

  return 0;
}