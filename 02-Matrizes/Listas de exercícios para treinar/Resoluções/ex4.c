/*
    4. Supondo que uma matriz apresente em cada linha o total 
    de produtos vendidos ao mês por uma loja que trabalha 
    com cinco tipos diferentes de produtos, 
    construir um programa que leia esse total e, ao final, 
    apresente o total de produtos vendidos em cada mês e 
    o total de vendas por ano por produto.
*/

#include <stdio.h>

int main() {

    //declarações necessárias:
    float m[12][5], mes, total = 0;

    //leitura dos dados:
    printf("Leitura dos dados por mês / produto...:\n");

    for (int i = 0; i < 12; i++) {
        printf("\nMês %d\n", (i + 1));
        for (int j = 0; j < 5; j++) {
            printf("Total do produto %d: R$ ", (j + 1));
            scanf("%f", &m[i][j]);
        }
    }

    //calculos e iumpressão dos resultados:
    for (int i = 0; i < 12; i++) {
        mes = 0;
        for (int j = 0; j < 5; j++) {
            mes += m[i][j];
            total += m[i][j];
        }
        printf("\nTotal do mês %d: %.2f", (i + 1), mes);
    }

    printf("\nTotal do ano: %.2f\n", total);

    return 0;
}