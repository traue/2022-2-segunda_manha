#include <stdio.h>
#include <stdlib.h>

struct No {
    int valor;
    struct No *prox;
};

typedef struct No no;

int tamanho;

void inicializa(no *LISTA);
int menu();
void opcao(no *LISTA, int opc);
int estaVazia(no *LISTA);
void adicionarNoInicio(no *LISTA);
no *criaNo();
void adicionarAoFinal(no *LISTA);
void adicionarEmPosicao(no *LISTA);
void mostrarLista(no *LISTA);

int main() {

    no *LISTA = (no *) malloc(sizeof(no));

    if (!LISTA) {
        printf("Sem memória suficiente!");
        exit(1);
    }

    inicializa(LISTA);

    int opc;

    do {
        opc = menu();
        opcao(LISTA, opc);
    } while(opc);

    return 0;
}

void inicializa(no *LISTA) {
    LISTA->prox = NULL;
    tamanho = 0;
}

int menu() {
    int opc;
    printf("\nEscolha a opção desejada: ");
    printf("\n >> 0 - Sair");
    printf("\n >> 1 - Limpar Lista");
    printf("\n >> 2 - Mostrar Lista");
    printf("\n >> 3 - Adicionar elemento no início da lista");
    printf("\n >> 4 - Adicionar elemento ao final da lista");
    printf("\n >> 5 - Adicionar elemento em posição de sua escolha");
    printf("\n >> 6 - Retirar elemento do início da lista");
    printf("\n >> 7 - Retirar elemento do final da lista");
    printf("\n >> 8 - Retirar elemento em posição de sua escolha");
    printf("\nOpção: ");
    scanf("%d", &opc);
    return opc;
}

void opcao(no *LISTA, int opc) {
    switch (opc) {
        case 0: //sair
            break;  
        case 1: //limpar
            break;
        case 2:
            mostrarLista(LISTA);
            break; 
        case 3:
            adicionarNoInicio(LISTA);
            break; 
        case 4:
            adicionarAoFinal(LISTA);
            break; 
        case 5:
            adicionarEmPosicao(LISTA);
            break; 
        case 6: //retira do início
            break; 
        case 7: //retira do final
            break; 
        case 8: //retira posicão n
            break; 
        default:
            printf("\n\nOpção inválida!");
            break;
    }
}

//--------------funções principais--------------

int estaVazia(no *LISTA) {
    return(LISTA->prox == NULL);
}

void mostrarLista(no *LISTA) {
    if (estaVazia(LISTA)) {
        printf("A lista está vazia! Nada a exibir!");
        return;
    }
    no *temp;
    temp = LISTA->prox;
    printf("\nLISTA: ");
    while (temp != NULL) {
        printf("%5d", temp->valor);
        temp = temp->prox;
    }
    printf("\n         ");

    for (int cont = 0; cont < tamanho; cont++)
        printf("  ^  ");

    printf("\nOrdem: ");

    for (int cont = 0; cont < tamanho; cont++) 
        printf("%5d", cont + 1);  

    printf("\n\n"); 
}

void adicionarNoInicio(no *LISTA) {
    no *novoNo = criaNo();
    no *noTemp = LISTA->prox;
    LISTA->prox = novoNo;
    novoNo->prox = noTemp;
    tamanho++;
}

no *criaNo() {
    no *novoNo = (no *)malloc(sizeof(no));
    if (!novoNo) {
        printf("Sem memória para criação de um novo elemento!");
        exit(1);
    }
    printf("\n >> Valor do novo elemento: ");
    scanf("%d", &novoNo->valor);
    return novoNo;
}

void adicionarAoFinal(no *LISTA) {
    no *novo = criaNo();
    novo->prox = NULL;
    if (estaVazia(LISTA)) {
        LISTA->prox = novo;
        return;
    }
    no *temp = LISTA->prox;
    while (temp->prox != NULL)
        temp = temp->prox;
    temp->prox = novo;
    tamanho++;
}

void adicionarEmPosicao(no *LISTA) {

    if (estaVazia(LISTA)) {
        adicionarNoInicio(LISTA);
        return;
    }
    int posicao;
    printf("\n >> Em qual posição [0 - %d]: ", tamanho);
    scanf("%d", &posicao);
    if (posicao > 0 && posicao <= tamanho) {
        if (posicao == 1) {
            adicionarNoInicio(LISTA);
            return;
        }
        no *novoNo = criaNo();
        no *atual = LISTA->prox;
        no *anterior = LISTA->prox;
        for (int i = 1; i < posicao; i++) {
            anterior = atual;
            atual = atual->prox;
        }
        anterior->prox = novoNo;
        novoNo->prox = atual;
        tamanho++;
        return;
    }
    printf("\n\n >> Posição de inserção inválida!");
    printf("\n >> A lista possui apenas %d elemento(s)\n", tamanho);
}