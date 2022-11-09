/*
  Crie um programa que seja capaz de ler dois valores inteiros
  Em seguida deve-se exibir a divisão e o resto (primeiro pelo segundo) e AINDA,
  mostrar se são divisíveis, ou seja, se o resto for 0, portanto os valores são
  divisíveis. Lembre-se que não existe divisão por zero!
*/

#include <stdio.h>

int main(void) {
  int a, b, divisao, resto;
  printf("Informe o divisor: ");
  scanf("%d", &a);

  do{
    printf("Informe o dividendo: ");
    scanf("%d", &b);
  }while (b == 0);

  divisao = a / b;
  printf("\nA divisão de %d e %d é %d.\n", a, b, divisao);

  resto = a % b;
  printf("O resto da divisão de %d e %d é %d.\n", a, b, resto);

  if (a % b == 0){
    printf("\nO número %d é divisível por %d", a, b);
  }else{
    printf("\nO número %d não é divisível por %d.", a, b);
  }

  return 0;
}