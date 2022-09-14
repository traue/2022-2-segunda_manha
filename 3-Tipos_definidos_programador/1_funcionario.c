//Vamos, aqui, definir uma strict nossa de que representará um funionário

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//definição da estrutura (tipo definido por nós mesmos, programadores)
struct funcionario {
    int codigo, dpto, cargo;
    char nome[50];
    float salario;
};

int main() {

    //declação de uma variável que utiliza essa estrutura
    //leitura que fazemos é: "func1 é uma variável do tipo funcionário"
    struct funcionario func1;

    //para atribuir os valores...:
    func1.codigo = 1;
    func1.salario = 30000;
    func1.dpto = 10;
    func1.cargo = 100;
    strcpy(func1.nome, "Sidney e Derik");

    //acessando os dados para impressão:
    printf("Código do funcionário: %d\n", func1.codigo);
    printf("Nome: %s\n", func1.nome);
    printf("Departamento: %d\n", func1.dpto);
    printf("Cargo: %d\n", func1.cargo);
    printf("Salário: R$ %.2f \n", func1.salario);

    return 0;
}