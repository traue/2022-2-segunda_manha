/*
    3. Faça um programa que armazene as notas das provas 1 e 2 de 15 alunos.
    Calcule e armazene a média arredondada. Armazene também a situação do aluno:
    1- Aprovado ou 2-Reprovado. Ao final o programa deve imprimir uma listagem contendo as notas,
    a média e a situação de cada aluno em formato tabulado. Utilize quantos vetores forem 
    necessários para armazenar os dados.
*/

//POSSÍVEL SOLUÇÃO:

#include <stdio.h>

int main() {
    int numAlunos = 5;
    float notas1[numAlunos], notas2[numAlunos], medias[numAlunos];
    int situacao[numAlunos];

    printf("Inicie a digitação das notas...\n");

    for (int i = 0; i < numAlunos; i++) {
        printf("\nDigite a NOTA 1 do aluno %d: ", (i + 1));
        scanf("%f", &notas1[i]);

        printf("Digite a NOTA 2 do aluno %d: ", (i + 1));
        scanf("%f", &notas2[i]);

        medias[i] = (notas1[i] + notas2[i]) / 2;
        if(medias[i] >= 6) {
            situacao[i] = 1;
        } else {
            situacao[i] = 2;
        }
    }

    printf("Certo.. vamos imprimir o relatório agora...\n");

    for (int i = 0; i < numAlunos; i++) {
        printf("\nAluno %d:\n", (i + 1));
        printf("\tNota 1: %.2f\n", notas1[i]);
        printf("\tNota 2: %.2f\n", notas2[i]);
        printf("\tMédia: %.2f\n", medias[i]);
        if(situacao[i] == 1) {
            printf("\tSituação: APROVADO!\n");
        } else {
            printf("\tSituação: REPROVADO!\n");
        }
    }

    return 0;
}