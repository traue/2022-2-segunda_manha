/*
5. Faça um programa em C que leia 3 notas de um aluno, calcule a média e diga se ele está aprovado ou não (média 6).
*/


#include <stdio.h>

int main() {
    float n1, n2, n3, media;    
    //leitura das notas:
    printf("\nInforme a Nota 1: ");
    scanf("%f", &n1);

    printf("\nInforme a Nota 2: ");
    scanf("%f", &n2);

    printf("\nInforme a Nota 3: ");
    scanf("%f", &n3);

    //calculo da média:
    media = (n1 + n2 + n3) / 3;

    printf("\nMédia: %.2f", media);

    //análise de aprovação
    if(media >= 6)
        printf("\nAprovado!");
    else
        printf("\nReprovado");
    
    return 0;
}