#include <stdio.h>


void printVetor(int v[], int n) {
    for (int i = 0; i < n; i++)
        printf("% 5d", v[i]);
    printf("\n");
}

void insertionSort(int v[], int n) {
    int key, i, j;

    for (i = 1; i < n; i++) {
        key = v[i];
        j = i - 1;

        while(j >= 0 && v[j] > key) {
            v[j + 1] = v[j];
            j--;
        }

        v[j + 1] = key;
    }
}

int main() {

    int v[] = {99, 98, 97, 55, 44, 42, 42, 41, 40, 30, 10, 9, 8};
    int n = sizeof(v) / sizeof(int);

    // printf("\nTamnho do vetor: %ld", sizeof(v));
    // printf("\nTamnho do int: %ld", sizeof(int));
    // printf("\nTamnho do 1º elemento: %ld", sizeof(v[0]));
    // printf("\nPortanto, tamanho do Vetor: %ld", sizeof(v) / sizeof(int));

    printf("\nVetor original: ");
    printVetor(v, n);

    insertionSort(v, n);

    printf("\nVetor ordenado: ");
    printVetor(v, n);

    return 0;
}