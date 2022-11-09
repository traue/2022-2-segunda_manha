/*
Implemente um programa em C que leia o nome, a idade e o endereço de uma pessoa e armazene esses dados em uma estrutura. Em seguida, imprima na tela a estrutura lida.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa
{
    char nome[50], endereco[60];
    int idade;
};

typedef struct pessoa Pessoa;

int main()
{
    Pessoa p1;
    printf("Informe um nome: ");
    scanf("%[^\n]%*c", p1.nome);

    printf("Informe o endereço: ");
    scanf("%[^\n]%*c", p1.endereco);

    printf("Informe a idade: ");
    scanf("%d", &p1.idade);

    printf("\nNome: %s.", p1.nome);
    printf("\nEndereço: %s.", p1.endereco);
    printf("\nIdade: %d.", p1.idade);

    return 0;
}