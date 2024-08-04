#include <stdio.h>
#include <string.h>

int main() {
  char mensagem[100];

  while (1) {
    printf("Digite uma mensagem (ou 'FIM' para encerrar): ");
    scanf(" %[^\n]s", mensagem);

    if (strcmp(mensagem, "FIM")== 0) {
      break;
    }

      for (int i = 0; mensagem[i] != '\0'; ++i) {
        printf("%c ", mensagem[i]);
      }

    printf("\n");
  }

  return 0;
}
