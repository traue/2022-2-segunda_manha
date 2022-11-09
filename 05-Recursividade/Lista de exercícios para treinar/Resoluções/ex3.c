/*
3. Escreva um programa recursivo em C para converter um número da sua 
   forma decimal para a forma binária. 
   Dica: dividir o número sucessivamente por 2, sendo que 
   o resto da i-ésima divisão vai ser o dígito i do 
   número binário (da direita para a esquerda).
*/

#include <stdio.h>

int binario(int decimal) {
    if (decimal < 2) 
        return decimal;
    printf("\nChamando: 10 * bin(%d) / 2 + %d MOD 2", decimal, decimal);
    return (10 * binario(decimal / 2)) + decimal % 2;
}

int main() {
    int n;
    printf("Informe o número a ser convertido: ");
    scanf("%d", &n);
    printf("\nBinário: %d", binario(n));
    return 0;
}