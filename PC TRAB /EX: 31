#include <stdio.h>

#define TAMANHO 10

int main(void) {
  int A[TAMANHO];
  int B[TAMANHO];
  int IGUAIS = 1;
  
  printf("Preencha o vetor A:\n");
  for (int i = 0; i < TAMANHO; i++) {
    do{
      printf("Digite um valor (0 - 9) %d: ", i + 1);
      scanf("%d", &A[i]);
    }
    while (A[i] < 0 || A[i] > 9);
  }

  printf("\nPreencha o vetor B:\n");
  for (int i = 0; i < TAMANHO; i++) {
    do{
      printf("Digite um valor (0 - 9) %d: ", i + 1);
      scanf("%d", &B[i]);
    }
    while (B[i] < 0 || B[i] > 9);
  }

  for (int i = 0; i < TAMANHO && IGUAIS; i++) {
    if (A[i] != B[i]) {
      IGUAIS = 0;
    }
  }

  printf("\nOs vetores são %s.\n", IGUAIS ? "iguais" : "diferentes");

  return 0;
}
