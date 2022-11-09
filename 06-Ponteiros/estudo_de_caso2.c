#include <stdio.h>

int main() {
    int *pNum; // declaracao de ponteiro
    int num1, num2;
    pNum = &num1;   // aponta pNum para num
    *pNum = 10;    // atribui valor a num por meio do apontamento
    num2 = 20;     // atribui valor a num2
    num2 += *pNum; // atribui valor a num2 por meio do ponteiro
    // obtendo valor de variaveis
    printf("\nConteudo de num1: %d ", num1); //10
    printf("\nEndereço de num1: %p ", &num1); //0x16d21b09c 

    printf("\n---------");
    printf("\nConteudo de num2: %d ", num2); //30
    printf("\nEndereço de num2: %p ", &num2); //0x16d21b098

    printf("\n---------");
    // obtendo valor de ponteiros
    printf("\nConteudo de pNum: %p ", pNum); //0x16d21b09c é o mesmo de num1
    printf("\nConteudo do apontamento de pNum: %d ", *pNum); //10
    printf("\nEndereço de pNum: %p ", &pNum); //0x16d21b0a0

    return 0;
}