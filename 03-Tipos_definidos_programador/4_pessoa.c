#include <stdio.h>
//#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

typedef enum {false, true} bool;

struct pessoa {
    char nome[50];
    int idade;
    float saldoEmConta;
    bool fumante;
};

typedef struct pessoa Pessoa;


int main() {
    
    Pessoa p1;

    strcpy(p1.nome, "Sidney");
    p1.idade = 20;
    p1.saldoEmConta = 1.99;
    p1.fumante = false;


    if(p1.fumante) {
        printf("O cara fuma!");
    } else {
        printf("O cara não fuma!");
    }

    return 0;
}