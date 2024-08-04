#include <stdio.h>

#define TAMANHO 10

int main(void) {
  
  float B1[TAMANHO];
  float B2[TAMANHO];
  float MF[TAMANHO];
  int SEXO[TAMANHO];
  float MAX_MED_M = 0;
  
  for (int i = 0; i < TAMANHO; i++) {
    do {
      printf("Digite a nota do 1° Bimestre do aluno %d (0 a 10): ", i + 1);
      scanf("%f", &B1[i]);
    } 
    while (B1[i] < 0 || B1[i] > 10);

    do {
      printf("Digite a nota do 2° Bimestre do aluno %d (0 a 10): ", i + 1);
      scanf("%f", &B2[i]);
    } 
    while (B2[i] < 0 || B2[i] > 10);

    do {
      printf("Digite o sexo do aluno %d (1 = Masculino ou 2 = Feminino): ", i + 1);
      scanf("%d", &SEXO[i]);
    } 
    while (SEXO[i] != 1 && SEXO[i] != 2);

    MF[i] = (B1[i] + B2[i]) / 2.0;
  }

  for (int i = 0; i < TAMANHO; i++) {
    if (SEXO[i] == 1 && MF[i] > MAX_MED_M) {
      MAX_MED_M = MF[i];
    }
  }

  printf("A maior média final dos alunos do sexo Masculino é: %.2f\n", MAX_MED_M);

  return 0;
}
