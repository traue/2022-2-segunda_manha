#include <stdio.h>
#include <stdlib.h>

struct Pilha {
    int topo;
    int capacidade;
    float *pElem; //valor de cada nó 
};

void criaPilha(struct Pilha *pilha, int capacidade);
int estaCheia(struct Pilha *pilha);
int estaVazia(struct Pilha *pilha);
void empilhar(struct Pilha *pilha);
float desempilhar(struct Pilha *pilha);
float top(struct Pilha *pilha);
void motraPilha(struct Pilha *pilha);

int main() {

    struct Pilha pilha;
    int capacidade, opc;
    float valor;

    printf("\nCapacidade da pilha: ");
    scanf("%d", &capacidade);

    criaPilha(&pilha, capacidade);

    while(1) {
         printf("\n1 - Empilhar (PUSH)");
         printf("\n2 - Desempilhar (POP)");
         printf("\n3 - Mostrar elementro do topo");
         printf("\n4 - Mostrar todos elementos");
         printf("\n5 - Sair");
         printf("\nOpção: ");
         scanf("%d", &opc);

        switch (opc) {
            case 1:
                empilhar(&pilha);
                break;
            case 2:
                if (estaVazia(&pilha)) {
                    printf("\n---->> A pilha já está vazia!\n\n");
                    break;
                }
                valor = desempilhar(&pilha);
                printf("\n---->> Devempilhado: %f\n\n", valor);
                break;
            case 3:
                if (estaVazia(&pilha)) {
                    printf("\n---->> A pilha está vazia! Não há nenhum elemento no topo!\n\n");
                    break;
                }
                valor = top(&pilha);
                printf("\n---->> Valor do topo: %f\n\n", valor);
                break;
            case 4:
                motraPilha(&pilha);
                break;
            case 5:
                free(pilha.pElem); //todo: revisar
                exit(0);
            default:
                printf("\n--->> Opção inválida!\n");
        }

    }

    return 0;
}

void criaPilha(struct Pilha *pilha, int capacidade) {
    pilha->topo = -1;
    pilha->capacidade = capacidade;
    pilha->pElem = (float *)malloc(capacidade * sizeof(float));
}

int estaCheia(struct Pilha *pilha) {
    if (pilha->topo == pilha->capacidade - 1)
        return 1;
    return 0;
}

int estaVazia(struct Pilha *pilha) {
    if (pilha->topo == -1)
        return 1;
    return 0;
}

void empilhar(struct Pilha *pilha) {

    if (!estaCheia(pilha)) {
        printf("\n---->> Valor: ");
        float valor;
        scanf("%f", &valor);

        pilha->topo++;
        pilha->pElem[pilha->topo] = valor;

        printf("\n---->> %f empilhado!\n", valor);

        return;
    }
    printf("\n---->> A pilha já está cheia!\n");
}

float desempilhar(struct Pilha *pilha) {
    float valor = pilha->pElem[pilha->topo];
    pilha->topo--;
    return valor;
}

float top(struct Pilha *pilha) {
    return pilha->pElem[pilha->topo];
}

void motraPilha(struct Pilha *pilha) {
    if (!estaVazia(pilha)) {
        for (int i = pilha->topo; i >= 0; i--) {
            printf("%4d >> ", i);
            printf("%f\n", pilha->pElem[i]);
        }
        return;
    }
    printf("\n---->> A pilha está vazia! Impossível mostrar!\n\n");
}