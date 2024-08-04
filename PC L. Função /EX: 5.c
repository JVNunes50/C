#include <stdio.h>

void calcularReajuste(double preco, double reajustePercentual, double *precoReajustado, double *reajusteEmReais);

int main() {
  int i;
  double preco, reajustePercentual, precoReajustado, reajusteEmReais;

  for (i = 0; i < 100; i++) {
    printf("Digite o preço da mercadoria: ");
    scanf("%lf", &preco);

    printf("Digite o reajuste em porcentagem: ");
    scanf("%lf", &reajustePercentual);

    calcularReajuste(preco, reajustePercentual, &precoReajustado, &reajusteEmReais);
    printf("Preço reajustado: %.2f\n", precoReajustado);
    printf("Reajuste em reais: %.2f\n", reajusteEmReais);
  }

  return 0;
}

void calcularReajuste(double preco, double reajustePercentual, double *precoReajustado, double *reajusteEmReais) {
  *reajusteEmReais = preco * (reajustePercentual / 100.0);
  *precoReajustado = preco + *reajusteEmReais;
}
