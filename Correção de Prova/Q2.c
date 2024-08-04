#include <stdio.h>

#define SM 1302.00

int main(void) {
  
  int opcao, codigo;
  float salario, gasto;
  float maiorPrata = 0, maiorOuro = 0;
  int codigoPrata, codigoOuro;
  
  do{
    printf("MENU:\n");
    printf("[1]: CADASTRAR CLIENTE\n");
    printf("[0]: SAIR DO PROGRAMA\n");
    printf("Sua Opção: ");scanf("%i", &opcao);
    
    if(opcao == 0)printf("Fim do progra.\n");
      
    else if(opcao != 1)printf("ERRO: Escolha de novo\n");
      
    else{
      printf("Salario: R$ "); scanf("%f", &salario);
      
      if(salario < SM) printf("ERRO: Escolha de novo\n");
        
      else{
        printf("Código: ");scanf("%i", &codigo);
        printf("Gasto: R$ ");scanf("%f", &gasto);
        salario /= SM;
        
        if(salario > 10 && gasto > maiorOuro){
          maiorOuro = gasto;
          codigoOuro = codigo;
        }
        if(salario <= 10 && gasto > maiorPrata){
          maiorPrata = gasto;
          codigoPrata = codigo;
        }
      }
    }
  }while(opcao != 0);
  printf("Melhor Cliente - PRATA: R$ %.2f (%i)\n", maiorPrata, codigoPrata);
  printf("Melhor Cliente - OURO: R$ %.2f (%i)\n", maiorOuro, codigoOuro);
  return 0;
}
