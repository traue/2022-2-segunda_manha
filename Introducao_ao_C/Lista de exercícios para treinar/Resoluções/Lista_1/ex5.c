/*
5. Faça um programa em C que faça a conversão de uma temperatura lida em Celcius 
para Fahrenheit. Fórmula F = (9 * C + 160) / 5
*/

#include <stdio.h>

int main() {
    float gCelcius, gFahrenheit;
    printf("\nInforme a temperaruta em Celcius: ");
    scanf("%f", &gCelcius);
    gFahrenheit = (9 * gCelcius + 160) / 5;
    printf("\nTemperatura em Fahrenheit: %.3f", gFahrenheit);
    return 0;
}