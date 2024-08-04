#include <stdio.h>

#define TAMANHO 30

int main(void) {
  float B1[TAMANHO];
  float B2[TAMANHO];
  float MF[TAMANHO];
  int AL_MF = 0;
  
  for (int i = 0; i < TAMANHO; i++) {
    printf("Digite a nota do 1° bimestre do aluno %d: ", i + 1);
    scanf("%f", &B1[i]);

    printf("Digite a nota do 2° bimestre do aluno %d: ", i + 1);
    scanf("%f", &B2[i]);

    MF[i] = (B1[i] + B2[i]) / 2;
  }

  for (int i = 0; i < TAMANHO; i++) {
    if (MF[i] >= 7.0) {
      AL_MF++;
    }
  }

  printf("Quantidade de alunos com média final acima de 7.0: %d\n", AL_MF);
  
  return 0;
}
