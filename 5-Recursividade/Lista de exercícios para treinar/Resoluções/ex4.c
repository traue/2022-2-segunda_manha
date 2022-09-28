/*
    4. Escreva uma função recursiva em linguagem C para 
    calcular o valor de x^n (x elevado a n)
*/

#include <stdio.h>

double potencia(int x, int n) {
    if(n == 0) //regra matemática
        return 1;
    
    if(n > 1) {
        return x * potencia(x, n - 1);
    } else {
        return x;
    }
}

int main() {
    int num, pot;

    printf("Informe o número: ");
    scanf("%d", &num);

    printf("Informe a potência: ");
    scanf("%d", &pot);

    printf("%d ^ %d = %.1f", 
        num, pot, potencia(num, pot));

    return 0;
}
