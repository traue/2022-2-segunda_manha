#include <stdio.h>

int main() {

    /*
        Os laços "for" em portugês estruturado seriam assim (exemplo):
            para i de 1 até 10, faça...
                bloco que será repetido 10x
            fim para;
        
        for (inicialização ; condição de parada; condição de incremento)

        Para entendermos melhor, vamos implementar o seguinte problema
            Faça um programa em C que leia 10 valores e ao final imprima a média aritmética 
            dos valores lidos.
    */

    float num, soma = 0, media = 0;
    
    //usando um laço "for":
    //lembrando que: i++ => i = i + 1;
    for(int i = 1; i <= 10; i++) {
        //esse bloco de código será repetido 10x
        printf("\nInforme o %dº número: ", i);
        scanf("%f", &num);
        soma += num; //é o mesmo que soma = soma + num
    }
    //calcula a média:
    media = soma / 10;
    
    //impressão dos dados:
    printf("A média é: %.2f", media);

    return 0;
}