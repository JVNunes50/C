#include <stdio.h>
#include <string.h>

int isUpperCase(char c) {
  return c >= 'A' && c <= 'Z';
}

int main() {
  char nomeCompleto[100];
  char abreviado[20];

  printf("Digite um nome completo: ");
  fgets(nomeCompleto, sizeof(nomeCompleto), stdin);

  abreviado[0] = '\0';

  int i = 0;
  while (nomeCompleto[i] != '\0') {
    while (nomeCompleto[i] == ' ') {
      i++;
    }

    int j = i;
    while (nomeCompleto[j] != ' ' && nomeCompleto[j] != '\0') {
      j++;
    }

    if (!(nomeCompleto[i] == 'd' && nomeCompleto[j] == 'a') &&
        !(nomeCompleto[i] == 'd' && nomeCompleto[j] == 'e') &&
        !(nomeCompleto[i] == 'd' && nomeCompleto[j] == 'i') &&
        !(nomeCompleto[i] == 'd' && nomeCompleto[j] == 'o')) {

    if (isUpperCase(nomeCompleto[i])) {
          strncat(abreviado, &nomeCompleto[i], 1);
        }

        strcat(abreviado, ".");
    }

      i = j;
  }

  printf("Abreviado: %s\n", abreviado);

  return 0;
}
