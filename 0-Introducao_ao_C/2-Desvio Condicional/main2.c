/* (do material utilizado pelo professor)

    O hospital local está fazendo uma campanha para receber 
    doação de sangue.

    O doador deve inicialmente se cadastrar informando o seu nome 
    completo, sua idade, seu peso, responder a um breve questionário 
    e apresentar um documento oficial com foto.

    Faça um programa que permita ao hospital realizar o cadastro 
    dos voluntários para avaliar a aptidão quanto à doação de sangue. 

    Para estar apto a doar, o voluntário deve ter idade
    entre 16 e 69, pesar pelo menos 50 kg, estar bem alimentado e 
    não estar resfriado. 

    O programa deve ler os dados e imprimir no final o nome do 
    voluntário e se ele está apto ou não.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    //declarações das variáveis:
    char nome[30];
    int idade, bemAlimentado, resfriado;
    float peso;

    //leituras...:
    //<arrumar>
    printf("Informe o nome: ");
    scanf("%s", &nome);

    printf("Informe o peso: ");
    scanf("%f", &peso);

    printf("Informe a idade: ");
    scanf("%d", &idade);

    printf("Está bem alimentado? <1 - Sim / 0 - Não: ");
    scanf("%d", &bemAlimentado);

    printf("Está resfriado? <1 - Sim / 0 - Não: ");
    scanf("%d", &resfriado);

    //verificação da aptidão...:
    if(peso > 50 && bemAlimentado && !resfriado
       && (idade >= 16 && idade <= 69)) {
        printf("%s está apto!", nome);
       } else {
        printf("%s não está apto!", nome);
       }

    return 0;
}