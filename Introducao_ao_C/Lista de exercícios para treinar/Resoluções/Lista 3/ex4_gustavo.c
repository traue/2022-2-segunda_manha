#include <stdio.h>

int main(void){
  float n1, n2, n3, media, nota_turma, media_turma;
  for(int i = 1; i <= 5; i++){
    printf("\nAluno %d.\n", i);
    printf("Insira a primeira nota: ");
    scanf("%f", &n1);

    printf("Insira a segunda nota: ");
    scanf("%f", &n2);

    printf("Insira a terceira nota: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;
    printf("\nA média do aluno %d é: %.2f\n\n", i, media);
    nota_turma += n1 + n2 + n3;
  }

  media_turma = nota_turma / 15;
  printf("\nA média da turma é: %.2f", media_turma);
  
  return 0;
}