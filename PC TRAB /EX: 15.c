#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 10

int main() {
  float ARRAY[TAMANHO];
  float NUM;

  srand(time(NULL));
  for (int i = 0; i < TAMANHO; i++) {
    ARRAY[i] = (float)(rand() % 900 + 100) / 10.0;
  }

  printf("Digite um número: ");
  scanf("%f", &NUM);

  printf("Termos maiores que %.1f:\n", NUM);
  
  for (int i = 1; i < TAMANHO; i++) {
    if (ARRAY[i] > NUM) {
      printf("O índice de %d: %.1f\n", i, ARRAY[i]);
    }
  }
  return 0;
}
