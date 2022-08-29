/*
    Uma transportadora utiliza caminhões que suportam até 10 toneladas de 
    peso, as caixas transportadas tem tamanho fixo e o caminhão comporta 
    no máximo 200 volumes, assim, esta transportadora precisa controlar 
    a quantidade e o peso dos volumes para acomodar nos caminhões.
    Faça um programa que leia n caixas e seu peso, ao final, o programa 
    deve imprimir a quantidade de volumes, o peso total dos volumes e o 
    peso médio dos volumes.
*/

#include <stdio.h>

int main() {
    int qtdVolumes = 0, opc;
    float peso, pesoTotal = 0, pesoMedio = 0;

    printf("Deseja cadastrar um volume? 1-SIM | 2-NÃO: ");
    scanf("%d", &opc);

    while(opc == 1 && pesoTotal < 10000 && qtdVolumes <= 200) {
        qtdVolumes++; //lembrar que é o mesmo que qtdVolumes = qtdVolumes + 1
        printf("\nInforme o peso deste volume: ");
        scanf("%f", &peso);
        pesoTotal += peso;

        printf("\nDeseja cadastrar um novo volume? 1-SIM | 2-NÃO: ");
        scanf("%d", &opc);
    }

    pesoMedio = pesoTotal / qtdVolumes;
    
    printf("\nQuantidade de volumes: %d", qtdVolumes);
    printf("\nPedo total desta carga: %.2f", pesoTotal);
    printf("\nPeso média das cargas: %.2f", pesoMedio);

    return 0;
}