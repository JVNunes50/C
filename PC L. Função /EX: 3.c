#include <stdio.h>

int anoBissexto(int ano);

int main() {
  int i;
  int ano, resultado;

  for (i = 0; i < 100; i++) {
    printf("Digite o ano: ");
    scanf("%d", &ano);

    resultado = anoBissexto(ano);
    if (resultado == 1) {
      printf("%d é um ano bissexto.\n", ano);
    } else {
        printf("%d não é um ano bissexto.\n", ano);
      }
  }

  return 0;
}

int anoBissexto(int ano) {
  if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
    return 1;
  } else {
      return 0;
  }
}
