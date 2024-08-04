#include <stdio.h>

int main() {
  char caractere;
  int contador = 0;

  printf("Digite uma mensagem: ");

  while ((caractere = getchar()) != '\n') {
    if (caractere == ' ') {
    contador++;
    }
  }

  printf("A quantidade de caracteres brancos na mensagem é: %d\n", contador);

  return 0;
}
