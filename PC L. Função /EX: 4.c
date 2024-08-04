#include <stdio.h>

double calcularIMC(int idade, double massa, char sexo);

int main() {
  int i;
  int idade;
  double massa;
  char sexo;
  double imc;

  for (i = 0; i < 100; i++) {
    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite a massa em kg: ");
    scanf("%lf", &massa);

    printf("Digite o sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);

    imc = calcularIMC(idade, massa, sexo);
    printf("IMC: %.2f\n", imc);
  }

   return 0;
}

double calcularIMC(int idade, double massa, char sexo) {
  double imc;
  if (idade <= 18) {
    imc = massa / ((1.0 + 1.1) * 1.3);
  } else if (sexo == 'M' || sexo == 'm') {
      imc = massa / ((1.0 + 1.0) * 1.3);
  } else {
      imc = massa / ((1.0 + 0.9) * 1.3);
  }

  return imc;
}
