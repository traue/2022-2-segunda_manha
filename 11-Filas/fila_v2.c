//Uma outra forma de implementar a fila
#include <stdio.h>
#include <stdlib.h>

struct No {
    int valor;
    struct No *prox;
};

typedef struct No no;

void inicializa(no *FILA);
int menu();
void opcao(no *FILA, int opc);
void inserir(no *FILA);
no *criaNO();
int vazia(no *FILA);
no *remover(no *FILA);
void libera(no *FILA);
void mostrarFila(no *FILA);

int tamanho;

int main() {
    no *FILA = (no *)malloc(sizeof(no));

    if (!FILA) {
        printf("Sem memória suficiente para fila!");
        exit(1);
    }

    inicializa(FILA);
    int opc;

    do {
        opc = menu();
        opcao(FILA, opc);
    } while(opc);

    return 0;
}

void inicializa(no *FILA) {
    tamanho = 0;
    FILA->prox = NULL;
}

int menu() {
        int opc;
        printf("\n\nInforme o número da opção:");
        printf("\n  1 - Limpar a fila");
        printf("\n  2 - Mostrar a fila");
        printf("\n  3 - Adicionar valor ao final da fila");
        printf("\n  4 - Retirar valor do início da fila");
        printf("\n  0 - Sair");
        printf("\nOpção: ");
        scanf("%d", &opc);
        return opc;
}

void opcao(no *FILA, int opc) {
    no *temp;
    switch (opc) {
        case 0:
            libera(FILA);
            break;
        case 1:
            libera(FILA);
            inicializa(FILA);
            break;
        case 2:
            mostrarFila(FILA);
            break;
        case 3:
            inserir(FILA);
            break;
        case 4:
            temp = remover(FILA);
            if (temp != NULL) {
                printf("\n >> Removido: %d", temp->valor);
                libera(temp);
            }
            break;
        default:
            printf("Opção inválida!");
            break;
    }
}

void inserir(no *FILA) {
    no *novo = criaNO();
    novo->prox = NULL;
    
    if (vazia(FILA)) {
        FILA->prox = novo;
    } else {
        no *temp = FILA->prox;
        while (temp->prox != NULL) 
            temp = temp->prox;
        
        temp->prox = novo;
        tamanho++;
    }
}

no *criaNO() {
    no *novoNo = (no *)malloc(sizeof(no));
        if (!novoNo) {
        printf("Sem memória suficiente para fila!");
        exit(1);
    }
    printf("\nValor: ");
    scanf("%d", &novoNo->valor);
    return novoNo;
}

int vazia(no *FILA) {
    return FILA->prox == NULL ? 1 : 0;
}

no *remover(no *FILA) {
    if (vazia(FILA)) {
        printf("\n >> A fila já está vazia! Nada a remover!");
        return NULL;
    }

    no *temp = FILA->prox;
    FILA->prox = temp->prox;
    temp->prox = NULL;
    tamanho--;
    return temp;
}

void libera(no *FILA) {
    if (!vazia(FILA)) {
        no *atual, *proxNo;
        atual = FILA->prox;
        while(atual != NULL) {
            proxNo = atual->prox;
            free(atual);
            atual = proxNo;
        }
    } else {
        free(FILA);
    }
}

void mostrarFila(no *FILA) {
    if (vazia(FILA)) {
        printf("\n >> Nada a mostrar. Fila vazia!");
        return;
    }
    no *temp;
    temp = FILA->prox;
    printf("\nFILA: ");
    while (temp != NULL) {
        printf("%5d", temp->valor);
        temp = temp->prox;
    }
     printf("\n        ");
    for (int cont = 0; cont <= tamanho; cont++) 
        printf("  ^  ");

    printf("\nOrdem:");

    for (int cont = 0; cont <= tamanho; cont++) 
        printf("%5d", cont + 1);  

    printf("\n\n"); 
}