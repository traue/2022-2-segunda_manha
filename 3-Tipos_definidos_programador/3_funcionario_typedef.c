#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct funcionario {
    int codigo, codDpto, codCargo;
    char nome[50];
    float salario;
};

typedef struct funcionario Funcionario;

int main() {

    Funcionario f1;
    
    f1.codigo = 123;
    f1.codCargo = 43;
    f1.codDpto = 90;
    f1.salario = 1075.86;
    strcpy(f1.nome, "James");

    printf("O nome do funcionário é %s", f1.nome);
    //..

    return 0;
}