#include <stdio.h>

//define-se as funções (protótipo) no início do arquivo
float areaRetangulo(float base, float altura);

int main() {

    float vBase, vAltura, vArea;

    printf("\nInforme a base do retângulo: ");
    scanf("%f", &vBase);

    printf("\nInforme a altura do retângulo: ");
    scanf("%f", &vAltura);

    vArea = areaRetangulo(vBase, vAltura);

    printf("\nA área deste retângulo é: %.2f", vArea);

    return 0;
}

//e as funções podem ser decladas após o método principal
float areaRetangulo(float base, float altura) {
    float area = base * altura; //corpo da função
    return area; //retorno
}