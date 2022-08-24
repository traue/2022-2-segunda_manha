/*
5. Construa um programa em C que leia vários números e 
informe quantos números entre 100 e 200 foram digitados. 
Quando o valor 0 (zero) for lido, o algoritmo deverá cessar sua execução.
*/

#include <stdio.h>

int main() {

    int numeroDigitado = -1, contador = 0;
    printf("Inicie a digitação de números....\n");

    while(numeroDigitado != 0) {
        printf("\nDigite: ");
        scanf("%d", &numeroDigitado);
        if(numeroDigitado >= 100 && numeroDigitado <= 200)
            contador++;
    }
    printf("Números entre 100 e 200 digitados: %d", contador);

    return 0;
}