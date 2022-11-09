#include <stdio.h>
#include <stdlib.h>

struct No {
    int num;
    struct No *prox;
};

typedef struct No no;
int tamanho;
no *ultimoRetirado;

void inicia();
int vazia(no *PILHA);
int menu();
void opcao(no *PILHA, int opc);
void libera(no *PILHA);
void push(no *PILHA);
no *criaNo();
no *pop(no *PILHA);
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

        case 3: 
            push(PILHA);
            break;

        case 4:
            ultimoRetirado = pop(PILHA);
            if (ultimoRetirado != NULL) 
                printf("\nRetirado: %d\n\n", ultimoRetirado->num);
            break;
        
        default:
            printf("\nOopção inválida!");
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
    printf("\nPilha zerada!\n\n");
}

int vazia(no *PILHA) {
    if (PILHA->prox == NULL)
        return 1;
    return 0;
}

void push(no *PILHA) {
    no *novoNo = criaNo();
    if (vazia(PILHA)) {
        PILHA->prox = novoNo;
    } else {
        no *temp = PILHA->prox;
        while (temp->prox != NULL)
            temp = temp->prox;
        
        temp->prox = novoNo;
    }
    tamanho++;
}

no *criaNo() {
    no *novoNo = (no *)malloc(sizeof(no));
    if (!novoNo) {
        printf("Sem espaço suficiente na memória!");
        exit(1);
    }
    printf("\nValor do novo elemento: ");
    scanf("%d", &novoNo->num);
    novoNo->prox = NULL;

    return novoNo;
}

no *pop(no *PILHA) {
    if (PILHA->prox == NULL) {
        printf("\nA PILHA já está vazia!\n\n");
        return NULL;
    }
    
    no *penultimo = PILHA, *ultimo = PILHA->prox;

    while (ultimo->prox != NULL) {
        penultimo = ultimo;
        ultimo = ultimo->prox;
    }

    penultimo->prox = NULL;
    tamanho--;
    return ultimo;
}

void mostrarPilha(no *PILHA) {
    if (vazia(PILHA)) {
        printf("\nA pilha está vazia!\n\n");
        return;
    }

    no *temp;
    temp = PILHA->prox;
    printf("PILHA:");
    while(temp != NULL) {
        printf("%5d", temp->num);
        temp = temp->prox;
    }
    printf("\n        ");
    for (int i = 0; i < tamanho; i++) 
        printf("  ^  ");
    printf("\nOrdem:");
    for (int i = 0; i < tamanho; i++)
        printf("%5d", i + 1);
    printf("\n\n");
}