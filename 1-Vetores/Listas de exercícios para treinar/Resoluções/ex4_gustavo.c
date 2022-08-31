/*
4. Faça um programa que leia um vetor vet de 10 elementos e obtenha um vetor w
cujos componentes são os fatoriais dos respectivos componentes de vet.
*/

//SOLUÇÃO DO GUSTAVO BRITO:

#include <stdio.h>

int main(void) {
  int vet[5], w[5], fact = 1;

  // for para gerar a inserção de dados
  for (int i = 0; i < 5; i++) {
    printf("Informe o %dº valor que você deseja fatorar: ", (i + 1));
    scanf("%d", &vet[i]);
  }
  // espaçamento
  printf("\n");

  // for pra realizar o fatoramento dos dados informados pelo usuário
  for (int i = 0; i < 5; i++) {
    printf("%d! = ", vet[i]);
    
    for (int j = vet[i]; j >= 1; j--) {
      fact *= j;

      if (j != 1) {
        printf("%d * ", j);
      } else {
        printf("%d", j);
      }
    }

    w[i] = fact;
    fact = 1;
    printf(" = %d\n", w[i]);
  }

  return 0;
}