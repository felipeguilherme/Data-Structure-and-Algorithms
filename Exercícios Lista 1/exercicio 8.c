/*
  
8. Faça um programa que receba dois números do teclado (num1 e num2) e troque os valores dos dois usando uma variável auxiliar (aux).


*/

#include <stdio.h>

int main(){
  
  int numero1, numero2, numero_auxiliar;

  printf("Digite o primeiro valor:  \n");
  scanf("%d", &numero1);

  printf("Digite o segundo valor:  \n");
  scanf("%d", &numero2);
  
  numero_auxiliar = numero1;
  numero1 = numero2;
  numero2 = numero_auxiliar;


  printf("Alterei os valores e agora o valor 1 tem: %d e o valor 2: %d\n", numero1, numero2);
  

  return 0;
}