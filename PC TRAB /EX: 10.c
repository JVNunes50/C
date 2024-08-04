#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 10

int main(void) {
  int ARRAY[TAMANHO];
  double MED_IMPAR = 0;
  double MED_PAR = 0;

  srand(time(NULL));
  for (int i = 0; i < TAMANHO; i++) {
    ARRAY[i] = (rand() % 900 + 100) / 10.0;
  }

  for (int i = 1; i < TAMANHO; i += 2) {
    MED_IMPAR += ARRAY[i];
  }
  MED_IMPAR /= TAMANHO / 2;

  for (int i = 0; i < TAMANHO; i += 2) {
    MED_PAR += ARRAY[i];
  }
  MED_PAR /= TAMANHO / 2;

  printf("Média de IMPAR: %.1f\n", MED_IMPAR);
  printf("Média de PAR: %.1f\n", MED_PAR);
  return 0;
}
