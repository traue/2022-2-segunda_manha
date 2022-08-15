/*(do material que o professor utiliza)

Escreva um programa em linguagem C que leia um peso na 
Terra e o número de um planeta e imprima o valor 
correspondente do peso neste planeta. 
A relação de planetas é dada a seguir juntamente com o 
valor das gravidades relativas à Terra.


Cód     Gravidade Relativa      Planeta
------------------------------------------
1           0,37                Mercúrio
2           0,88                Vênus
3           0,38                Marte
4           2,64                Júpter
5           1,15                Saturno
6           1,17                Urano


Para calcular o peso no planeta em questão, use a seguinte 
fórmula:

    PP = (PT / 10) * G

Sendo:
    PP = Peso no planeta
    PT = Peso na Terra
    G = Gravidade relativa

*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    //declarações:
    float pesoTerra, pesoPlaneta;
    int numPlaneta;

    //leituras:
    printf("Informe seu peso na Terra: ");
    scanf("%f", &pesoTerra);

    printf("\nInforme o número do planeta: \n");
    printf("1-Mercúrio; 2-Vênus; 3-Marte;\n");
    printf("4-Júpter; 5-Saturno; 6-Urano;\n");
    scanf("%d", &numPlaneta);

    switch (numPlaneta) {
        case 1:
            pesoPlaneta = (pesoTerra / 10) * 0.37;
            break;
        case 2:
            pesoPlaneta = (pesoTerra / 10) * 0.88;
            break;
        case 3:
            pesoPlaneta = (pesoTerra / 10) * 0.38;
            break;
        case 4: 
            pesoPlaneta = (pesoTerra / 10) * 2.64;
            break;
        case 5:
            pesoPlaneta = (pesoTerra / 10) * 1.15;
            break;
        case 6:
            pesoPlaneta = (pesoTerra / 10) * 1.17;
            break;
        default:
            printf("\nPlaneta inválido!");
    }
    printf("Seu peso no planeta escolhido é %.2f \n", pesoPlaneta);
}