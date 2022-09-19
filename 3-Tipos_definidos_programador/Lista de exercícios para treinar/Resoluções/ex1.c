/*
    1. Implemente um programa em C que leia o nome, a idade e o endereço de uma 
    pessoa e armazene esses dados em uma estrutura. Em seguida, imprima na tela os 
    dados da estrutura lida.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct pessoa {
    char nome[50];
    int idade;
    char endereco[80];
};

int main() {

    //variáveis
    struct pessoa p1;

    //leitura
    printf("\nInforme o nome da pessoa: ");
    //scanf("%s", &p1.nome);
    fgets(p1.nome, sizeof(p1.nome), stdin);

    printf("Informe o endereço da pessoa: ");
    fgets(p1.endereco, sizeof(p1.endereco), stdin);

    printf("Informe a idade da pessoa: ");
    scanf("%d", &p1.idade);

    //impressão
    printf("\nNome da pessoa: %s", p1.nome);
    printf("\nIdade da pessoa: %d", p1.idade);
    printf("\nEndereço da pessoa: %s", p1.endereco);

    return 0;
}