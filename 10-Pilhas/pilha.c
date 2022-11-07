#include <stdio.h>
#include <stdlib.h>

struct No {
    int num;
    struct No *prox;
};

typedef struct No no;
int tamanho;
void inicia();
int vazia(no *PILHA);
int menu();
void opcao(no *PILHA, int opc);
void libera(no *PILHA);
void mostrarPilha(no *PILHA);

int main() {
    no *PILHA = (no *)malloc(sizeof(no));
    if (!PILHA) {
        printf("Sem espaço na memória!");
        exit(1);
    }

    inicia(PILHA);
    int opc;

    do {
        opc = menu();
        opcao(PILHA, opc);
    } while(opc);
    return 0;
}

void inicia(no *PILHA) {
    PILHA->prox = NULL;
    tamanho = 0;
}

int menu() {
    int opc;
    printf("Esolha uma opção: \n");
    printf("0 - Sair\n");
    printf("1 - Reiniciar (zerar) Pilha\n");
    printf("2 - Mostrar Pilha\n");
    printf("3 - PUSH (inserir)\n");
    printf("4 - POP (retirar)\n");
    printf("Opção: ");
    scanf("%d", &opc);
    return opc;
}

void opcao(no *PILHA, int opc) {
    switch (opc) {
        case 0:
            libera(PILHA);
            break;

        case 1:
            libera(PILHA);
            inicia(PILHA);
            break;

        case 2:
            mostrarPilha(PILHA);
            break;
    }
}

void libera(no *PILHA) {
    if (!vazia(PILHA)) {
        no *atual, *proxNo;
        atual = PILHA->prox;
        while(atual != NULL) {
            proxNo = atual->prox;
            free(atual);
            atual = proxNo;
        }
    }
}

int vazia(no *PILHA) {
    if (PILHA->prox == NULL)
        return 1;
    return 0;
}

void mostrarPilha(no *PILHA) {
    if (vazia(PILHA)) {
        printf("A pilha está vazia!\n");
        return;
    }

    no *temp;
    temp = PILHA->prox;
    printf("PILHA: ");
    while(temp != NULL) {
        printf("%5d", temp->num);
        temp = temp->prox;
    }
    printf("\n");
    for (int i = 0; i < tamanho; i++) 
        printf(" ^ ");
    printf("Ordem:");
    for (int i = 0; i < tamanho; i++)
        printf("%5d", i + 1);
    printf("\n\n");
}