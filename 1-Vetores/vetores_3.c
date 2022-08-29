/*
    PARA TREINAR A MENTE...:
    ATÉ 10:35 PARA FAZER (SOZINHO) DEPOIS O PROF. FAZ! :D

    Faça um programa em C que leia 5 valores inteiros e 
    armazene em um vetor. Após a leitura o programa deve
    encontrar e imprimir o maior valor armazenado no vetor.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int lista[5];
    
    //leitura dos dados:
    
    //para pegar  "dinamicamente" o tamanho do vetor
    //vide: https://stackoverflow.com/questions/37538/how-do-i-determine-the-size-of-my-array-in-c
    int tamanho = sizeof(lista) / sizeof(lista[0]);
    //ou: int tamanho = sizeof(lista) / sizeof(int);
   
    for(int i = 0; i < tamanho; i++) {
        printf("Informe o %dº valor: ", (i + 1));
        scanf("%d", &lista[i]);
    }

    //busca pelo maior:
    int maior = lista[0];
    for(int i = 1; i < 5; i++) {
        if(maior < lista[i])
            maior = lista[i];
    }

    printf("\nO maior valor digitado foi: %d", maior);

    return 0;
}