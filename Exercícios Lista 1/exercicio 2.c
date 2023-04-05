/*
  Lista 01 - Exercício 02
  2. Elabore um algoritmo que receba como entrada o salário e o desconto do salário de um funcionário. Em seguida o algoritmo deve calcular o salário liquido do funcionário utilizando a formula Salário liquido = salário – desconto. Como saída, o algoritmo deve mostrar no vídeo o salário líquido.

*/

#include <stdio.h>

int main(){

  float salario, desconto, salario_liquido;

  printf("Qual o salario total?");
  scanf("%f", &salario);

   printf("Qual o total de descontos?");
  scanf("%f", &desconto);


  salario_liquido =(salario - desconto);

  printf("O valor liquido fica em: %.2f \n", salario_liquido);


 
  return 0;
}