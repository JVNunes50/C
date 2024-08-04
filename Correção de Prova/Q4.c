#include <stdio.h>

#define SIZE 100
#define PM 0.25

int main(void) {
  float preco[SIZE];
  float S1 = 0, S2 = 0;
  int i = 0;
  
  while(i < SIZE){
    printf("MERCADORIA %i: Preço (R$): ", i + 1);scanf("%f", &preco[i]);
    
    if(preco[i] < PM) printf("ERRO: Preço Minimo R$ 0.25\n");
      
    else{
      if(i < 50) S1 += preco[i];
        
      else S2 += preco[i];
      i++;
    }
  }
  printf("Preço Médio do 1º ao 50º Estabelecimento: R$ %.2f\n", S1 / (SIZE / 2));
  printf("Preço Médio do 51º ao 100º Estabelecimento: R$ %.2f\n", S2 / (SIZE / 2));
  return 0;
}
