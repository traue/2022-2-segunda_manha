/*
5. Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura
deve conter o número de matrícula do aluno, seu nome e notas de três provas.
Defina também um tipo para esta estrutura. Agora, escreva um programa que leia
os dados de cinco alunos e os armazena nessa estrutura. Em seguida, exiba o nome
e as notas do aluno que possui a maior média geral dentre os cinco.
*/

#include <stdio.h>
#include <string.h>

struct aluno {
  int id;
  char nome[50];
  float n1, n2, n3;
};
typedef struct aluno Aluno;

float media(float n1, float n2, float n3){
  float media = (n1 + n2 + n3) / 3;
  return media;
};


int main() {
  Aluno a[5];
  char temp;
  int aluno = 0;
  float medias[5][2];
  
  for (int i = 0; i < 5; i++) {
    printf("\nInforme a matrícula do aluno: ");
    scanf("%d", &a[i].id);

    printf("Informe o nome do aluno: ");
    scanf("%c", &temp);
    scanf("%[^\n]%*c", a[i].nome);

    printf("Informe a 1ª nota: ");
    scanf("%f", &a[i].n1);

    printf("Informe a 2ª nota: ");
    scanf("%f", &a[i].n2);

    printf("Informe a 3ª nota: ");
    scanf("%f", &a[i].n3);
    
    medias[i][0] = i;
    medias[i][1] = media(a[i].n1, a[i].n2, a[i].n3);

  }
  
  float maior[5][1];
  maior[0][0] = medias[0][1];
  
  for (int i = 0; i < 5; i++) {
    if (maior[0][0] < medias[i][1]) {
      maior[0][0] = medias[i][1];
      aluno = medias[i][0];
    }
  }

  printf("\nNotas e média do aluno com a melhor situação:\n");

  printf("\nNome: %s.", a[aluno].nome);
  printf("\n1ª nota: %.2f", a[aluno].n1);
  printf("\n2ª nota: %.2f", a[aluno].n2);
  printf("\n3ª nota: %.2f", a[aluno].n3);
  printf("\nMédia final: %.2f", maior[0][0]);

  printf("\n\nParabéns %s, você foi o aluno com as melhores notas!", a[aluno].nome);

  return 0;
}