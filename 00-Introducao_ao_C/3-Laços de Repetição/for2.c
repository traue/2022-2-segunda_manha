#include <stdio.h>

int main() {

    /*
        Os laços "for" em portugês estruturado seriam assim (exemplo):
            para i de 1 até 10, faça...
                bloco que será repetido 10x
            fim para;
        
        for (inicialização ; condição de parada; condição de incremento)

        Para entendermos melhor, vamos implementar o seguinte problema
            Faça um programa em C que leia N valores e ao final imprima a média aritmética 
            dos valores lidos.
            O programa deve perguntar ao usuário quantos valores devem ser lidos!
    */

    float num, soma = 0, media = 0;
    int qtdValores;

    printf("Quantos valores devo ler? ");
    scanf("%d", &qtdValores);

    for(int i = 1; i <= qtdValores; i++) {
        printf("\nInforme o %dº número: ", i);
        scanf("%f", &num);
        soma += num; 
    }
    media = soma / qtdValores;
    
    printf("A média é: %.2f", media);

    return 0;
}