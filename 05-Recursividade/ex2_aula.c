/* 
    Crie uma função recursiva que receba um número inteiro 
    positivo N e calcule o somatório dos números de 1 a N
*/

#include <stdio.h>

int soma(int n) {
    if (n > 0) {
        return n + soma(n - 1);
    } else {
        return n;
    }
}

//versão do Erickão:
int somaErick (int n){
    if(n <= 0){
        return n;
    } else {
        return n + soma(n - 1);
    }
}

//versã do Gustavão:
int somaGustavo(int n) {
  if (n <= 1)
    return 1;
  else
    return n + somaGustavo(n - 1);
}

int main() {
    int n;

    printf("Informe um valor: ");
    scanf("%d", &n);

    printf("\nA soma de 1 até %d é %d", n, soma(n));
    printf("\n(Erick) A soma de 1 até %d é %d", n, somaErick(n));
    printf("\n(Gus) A soma de 1 até %d é %d", n, somaGustavo(n));

    return 0;
}

//SOMA(4) = 1 + 2 + 3 + 4 = 10
//SOMA(5) = 1 + 2 + 3 + 4 + 5 = 15