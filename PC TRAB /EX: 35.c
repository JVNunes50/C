#include <stdio.h>

#define TAMANHO 2

int main() {
  int COD[TAMANHO];
  int QUANT[TAMANHO];
  float PRECO[TAMANHO];
  float TOTAL = 0;
    
  for (int i = 0; i < TAMANHO; i++) {
    printf("Digite o código %d: ", i + 1);
    scanf("%d", &COD[i]);

    printf("Digite a quantidade %d: ", i + 1);
    scanf("%d", &QUANT[i]);

    printf("Digite o preço %d: ", i + 1);
    scanf("%f", &PRECO[i]);
  }

  for (int i = 0; i < TAMANHO; i++) {
    TOTAL += QUANT[i] * PRECO[i];
  }

  printf("Total para pagar: R$%.2f\n", TOTAL);

  return 0;
}
