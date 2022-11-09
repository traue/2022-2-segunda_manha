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

    //podemos ter uma vetor de uma estrutura definida por nós mesmos!
    Funcionario func[10];

    for (int i = 0; i < 10; i++) {
        printf("\nInforme o código do funcionário %d: ", (i + 1));
        scanf("%d", &func[i].codigo);

        printf("\nInforme o nome do funcionário %d: ", (i + 1));
        scanf("%s", &func[i].nome);

        //...
    }

    for (int i = 0; i < 10; i++) {
        printf("\nCódigo: %d", func[i].codigo);
        printf("\nNome: %s", func[i].nome);
    }

    return 0;
}