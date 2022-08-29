#include <stdio.h>

int main(void) {

    float nota1 = 5;
    float nota2 = 5;
    float media = (nota1 + nota2) / 2;

    printf("Nota 1: %f\n", nota1);
    printf("Nota 2: %f\n", nota2);
    printf("A média é %f\n", media);

    //desvio simples, por UMA única condição

    /*
        As condições para o devio condicional sempre devem ser 
        do tipo "booleana", ou seja, o resultado deve ser
        verdadeiro ou falso.
        Para isso, podemos utilizar comparações, como:
         (<, >, <=, >=, !=, ==) 
    */
    if(media >= 6) {
        printf("Aprovado miseravi!");
    } else {
        printf("Reprovou... que peninha!");
    }

    //continua (if else.. switch... )
    return 0;
}

