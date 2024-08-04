#include <stdio.h>
#include <string.h>

int main() {
  char mensagem[100];
  char mensagemAlterada[100];

  printf("Digite uma mensagem: ");
  scanf(" %[^\n]", mensagem);

  printf("Mensagem Original: %s\n", mensagem);

  char primeiraLetra = mensagem[0];
  for (int i = 0; mensagem[i] != '\0'; ++i) {
    if (mensagem[i] == primeiraLetra) {
      mensagemAlterada[i] = '-';
    } else {
        mensagemAlterada[i] = mensagem[i];
      }
  }
  mensagemAlterada[strlen(mensagem)] = '\0';

  printf("Mensagem Alterada : %s\n", mensagemAlterada);

  return 0;
}
