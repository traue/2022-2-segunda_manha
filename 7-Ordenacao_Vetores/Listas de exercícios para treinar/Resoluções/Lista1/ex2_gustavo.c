/*
2. Crie um programa em C que seja capaz de ler um vetor de tamanho qualquer,
   ordená-lo e, em seguida, solicitar ao usuário um novo valor a ser inserido.
   Este processo de inserção deverá ocorrer no local correto com
   redimencionamento do vetor (sem reordená-lo).
   Do estudo de caso 1 (assunto 7), crie funções para ordenação, impressão e
   inserção.
   O programa deve imprimir o vetor orignial, ordenado e o novo vetor com o
   valor inserido
*/

#include <stdio.h>

void ordena(int vet[], int n);

int posicao(int vet[], int n, int vNum);

void reordIns(int vet[], int n, int vPosicao, int vNum);

void prints(int vet[], int n);

int main() {
  // Definição de variáveis
  int vet[100], n;

  // Obtém o tamanho do vetor
  printf("\nInforme o tamanho do vetor: ");
  scanf("%d", &n);

  // Obtém os valores do vetor
  for (int i = 0; i < n; i++) {
    printf("Informe o %dº valor: ", (i + 1));
    scanf("%d", &vet[i]);
  }

  // Print do vetor original
  printf("\nVetor original: ");
  prints(vet, n);

  // Chama função pra ordenar o vetor
  ordena(vet, n);

  // Print do vetor ordenado
  printf("\nVetor ordenado: ");
  prints(vet, n);

  // Definição de variáveis
  int vNum, vPosicao;

  // Obtém o número que o usuário deseja inserir dentro do vetor
  printf("\n\nInforme o valor que gostaria de inserir: ");
  scanf("%d", &vNum);

  // Encontra a posição em que o número precisa ser inserido
  vPosicao = posicao(vet, n, vNum);

  // Reordena e Insere o valor dentro do vetor
  reordIns(vet, n, vPosicao, vNum);

  // Print do vetor ordenado e com o número inserido
  printf("Vetor Final: ");
  prints(vet, n + 1);

  return 0;
}

// Função para ordenar o Vetor
void ordena(int vet[], int n) {
  int aux;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (vet[i] > vet[j]) {
        aux = vet[i];
        vet[i] = vet[j];
        vet[j] = aux;
      }
    }
  }
}

// Função para pegar a posição de inserção do valor no vetor
int posicao(int vet[], int n, int vNum) {
  for (int i = 0; i < n; i++) {
    if (vNum < vet[i]) {
      return i;
    }
  }
  return n + 1;
}

// Função para reordenar e inserir o valor na posição correta
void reordIns(int vet[], int n, int vPosicao, int vNum) {
  for (int i = n + 1; i >= vPosicao; i--) {
    if (i == vPosicao)
      vet[i] = vNum;
    else
      vet[i] = vet[i - 1];
  }
}

// Função para printar os itens do vetor
void prints(int vet[], int n) { 
  for (int i = 0; i < n; i++) {
    printf("%2d", vet[i]);
  }
}