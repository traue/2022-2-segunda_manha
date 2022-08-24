/*
    Faça um programa em linguagem C que funcione através do 
    menu a seguir:

    1 - Somar vários números
    2 - Multiplicar vários números
    3 - Sair do programa

*/

#include <stdio.h>

int main() {
    int opc;
    float num, soma, prod;
    do {
        printf("\n1 - Somar vários números\n");
        printf("2 - Multiplicar vários números\n");
        printf("3 - Sair\n");
        printf("Digite uma opção: ");
        scanf("%d", &opc);

        if(opc == 1) {
            soma = 0;
            printf("\nDigite um número ou -999 para encerrar: ");
            scanf("%f", &num);
            while(num != -999) {
                soma += num;
                printf("\nDigite um número ou -999 para encerrar: ");
                scanf("%f", &num);
            }
            printf("\nSoma = %f\n", soma);
        } else if (opc == 2) {
            prod = 1;
            printf("\nDigite um número ou -999 para encerrar: ");
            scanf("%f", &num);
            while(num != -999) {
                prod *= num;
                printf("\nDigite um número ou -999 para encerrar: ");
                scanf("%f", &num);
            }
            printf("\nMultiplicação = %f", prod);
        }

    } while(opc != 3);

    printf("Programa finalizado!");

    return 0;
}