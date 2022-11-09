/*
    Escreva um programa em C que contenha duas variáveis inteiras.
    Compare seus endereços e exiba o maior endereço.
*/

#include <stdio.h>

int main() {
    int n1, n2;

    printf("\nEndereço de n1: %p", &n1);
    printf("\nEndereço de n2: %p", &n2);

    if(&n1 > &n2) {
        printf("\nO endereço de N1 é maior!");
    } else {
        printf("\nO endereço de n2 é maior");
    }
    return 0;
}