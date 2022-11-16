#include <stdio.h>
#include <stdlib.h>

struct Pilha {
    int topo;
    int capacidade;
    float *pElem; //valor de cada nó 
};

void criaPilha(struct Pilha *pilha, int capacidade);
int estaCheia(struct Pilha *p);
void empilhar(struct Pilha *p);

int main() {

    struct Pilha pilha;
    int capacidade, opc;
    float valor;

    printf("\nCapacidade da pilha: ");
    scanf("%d", &capacidade);

    criaPilha(&pilha, capacidade);

    while(1) {
         printf("\n1 - Empihlar (PUSH)");
         printf("\n2 - Desempilhar (POP)");
         printf("\n3 - Mostrar elementro do topo");
         printf("\n4 - Sair");
         printf("\nOpção: ");
         scanf("%d", &opc);

        switch (opc) {
            case 1:
                empilhar(&pilha);
                break; //paramos aqui
            case 2:
                break;
            case 3:
                break;
            case 4:
                exit(0);
            default:
                printf("\nOpção inválida!\n");
        }

    }

    return 0;
}

void criaPilha(struct Pilha *pilha, int capacidade) {
    pilha->topo = -1;
    pilha->capacidade = capacidade;
    pilha->pElem = (float *)malloc(capacidade * sizeof(float));
}

int estaCheia(struct Pilha *p) {
    if (p->topo == p->capacidade - 1)
        return 1;
    return 0;
}

void empilhar(struct Pilha *p) {

    if (!estaCheia(p)) {
        printf("\nValor: ");
        float valor;
        scanf("%f", &valor);

        p->topo++;
        p->pElem[p->topo] = valor;

        printf("\n%f empilhado!\n", valor);

        return;
    }
    printf("\nA pilha já está cheia!\n");
}