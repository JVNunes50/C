#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 10
#define MAX 99
#define TAMANHO 100

int main(void) {
  int PAR;
  int IMPAR;
  int ARRAY[TAMANHO];

  srand(time(NULL));
  for (int i = 0; i < TAMANHO; i++) {
    ARRAY[i] = rand() % (MAX - MIN + 1) + MIN;
  }
  
  for (int i = 0; i < TAMANHO; i++) {
    if (ARRAY[i] % 2 == 0) {
      PAR++;
    } 
    else {
      IMPAR++;
    }
  }

  printf("Quantidade de pares: %i\n", PAR);
  printf("Quantidade de ímpares: %i\n", IMPAR);

  return 0;
}
