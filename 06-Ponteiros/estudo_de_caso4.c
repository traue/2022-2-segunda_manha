#include <stdio.h>

int main() {

    int *pNum; //declaração do ponteiro
    int vetNum[10]; //declaração de um vetor comum
    pNum = &vetNum[0]; //aponta o ponteiro pNum para uma POSIÇÃO no vetor
    *pNum = 10; //atribui o valor a posição do vetor pelo ponteiro

    pNum = vetNum; //aponta o pNum para o vetor vetNum
    pNum[1] = 20;

    printf("\nPosiçõ 0 do vetor: %d", vetNum[0]);
    printf("\nPosiçõ 1 do vetor: %d", vetNum[1]);

    return 0;
}