/*
    4. Construa uma função que,recebendo como parâmetros 
    quatro números inteiros, devolva ao módulo que o chamou 
    os dois maiores números dentre os quatro recebidos. 
    Faça um programa que leia tantos conjuntos de quatro valores
    quantos o usuário deseje e que acione a função para cada
    conjunto de valores, apresentando a cada vez os dois 
    maiores números. Se preferir, utilize vetor para 
    armazenar o conjunto de valores.
*/

#include <stdio.h>

void doisMaiores(int *vet, int *pMaior1, int *pMaior2) {
    int aux;
    //método da bolha (bouble sort)
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if(vet[i] < vet[j]) {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
    *pMaior1 = vet[0];
    *pMaior2 = vet[1];
}

int main() {
    
    int vet[4], maior1, maior2;

    for (int i = 0; i < 4; i++) {
        printf("Informe o %dº valor: ", (i + 1));
        scanf("%d", &vet[i]);
    }

    doisMaiores(vet, &maior1, &maior2);

    printf("Os dois maiores são: %d e %d", maior1, maior2);

    return 0;
}