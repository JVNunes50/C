#include <stdio.h>
#include <string.h>

int main() {
  char silaba[3];
  char mensagem[100];
  int contador = 0;

  printf("Digite uma sílaba: ");
  scanf("%2s", silaba);

  while (1) {
    printf("Digite uma mensagem: ");
    scanf(" %[^\n]s", mensagem);

    if (strstr(mensagem, silaba) != NULL) {
      contador++;
    } else {
        break; 
      }
  }

  printf("A sílaba '%s' apareceu %d vezes.\n", silaba, contador);
  
  return 0;
}
