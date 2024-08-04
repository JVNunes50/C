#include <stdio.h>

int multiplicacaoParesOuImpares(int numero, int opcao);

int main() {
  int i;
  int numero, opcao, resultado;

  for (i = 0; i < 50; i++) {
    printf("Digite um número inteiro maior que 0: ");
    scanf("%d", &numero);

    printf("Escolha a opção (0 para pares, 1 para ímpares): ");
    scanf("%d", &opcao);

    resultado = multiplicacaoParesOuImpares(numero, opcao);
    printf("Resultado para Número %d e Opção %d: %d\n", numero, opcao, resultado);
  }

  return 0;
}

int multiplicacaoParesOuImpares(int numero, int opcao) {
  int i, produto = 1;

  if (opcao == 0) {
    for (i = 2; i <= numero; i += 2) {
      produto *= i;
    }
  } else if (opcao == 1) {
      for (i = 1; i <= numero; i += 2) {
        produto *= i;
      }
  } else {
      printf("Opção inválida. Escolha 0 para pares ou 1 para ímpares.\n");
      return -1; // Valor de retorno inválido
    }
  
  return produto;
}
