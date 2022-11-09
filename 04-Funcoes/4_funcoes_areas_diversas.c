#include <stdio.h>

//define-se as funções (protótipo) no início do arquivo
float areaRetangulo(float base, float altura);
float areaTriangulo(float base, float altura);

int main() {

    float vBase, vAltura, vAreaRet, vAreaTri;

    printf("\nInforme uma base: ");
    scanf("%f", &vBase);

    printf("\nInforme uma altura: ");
    scanf("%f", &vAltura);

    vAreaRet = areaRetangulo(vBase, vAltura);
    vAreaTri = areaTriangulo(vBase, vAltura);

    printf("\nSe isso é um retângulo, a área é: %.2f", vAreaRet);
    printf("\nSe isso é um triângulo, a área é: %.2f", vAreaTri);

    return 0;
}

//e as funções podem ser decladas após o método principal
float areaRetangulo(float base, float altura) {
    float area = base * altura; //corpo da função
    return area; //retorno
}

float areaTriangulo(float base, float altura) {
    float area = (base * altura) / 2;
    return area;
}