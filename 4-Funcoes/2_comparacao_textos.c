#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char nome[30] = {'t', 'e', 's', 't', 'e'};
    char nomeNovo[30];

    printf("Informe um nome: ");
    scanf("%s", &nomeNovo);

    //comparando as duas cadeias de caracteres....
    if (strcmp(nome, nomeNovo) == 0) {
        printf("Os nomes são iguais!");
    } else {
        printf("Os nomes são diferentes!");
    }

    return 0;
}