/*
sintaxe do while em C:

    while(condição de incremento ou parada) {
        //será executado N vezes
    }

    Faça um programa em C que realize a soma de 
    todos os valores inteiros de 1 a n, sendo 
    que n deve ser informado pelo usuário,
    usando while.
*/

#include <stdio.h>

int main() {
    int i = 1, n, soma = 0;
    printf("Informe quantos valor devem ser somados: ");
    scanf("%d", &n);

    while(i <= n) { 
        soma += i; //soma = soma + i
        i++;
    }

    printf("\nA soma dos %d valores é: %d \n", n, soma);

    return 0;
}

