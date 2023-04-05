/*

04 - Algoritmo onde usuário digita seu salário e mais três gastos mensais e o programa retorna "Orçamento estourado!" caso os gastos sejam maiores que o salário e "Gastos dentro do orçamento" caso o salário seja maior que os gastos.


*/

#include <stdio.h>
#include <locale.h>


int main (){
  setlocale (LC_ALL, "Portuguese");

  float salario, gasto1, gasto2, gasto3, totalgasto;

  printf("Digite o seu salário:\n");
  scanf("%f", &salario);

  printf("Digite o seu primeiro gasto:\n");
  scanf("%f", &gasto1);

  printf("Digite o seu segundo gasto:\n");
  scanf("%f", &gasto2);

  printf("Digite o seu terceiro gasto:\n");
  scanf("%f", &gasto3);

  totalgasto = gasto1 + gasto2 + gasto3;

  if (totalgasto > salario){
    printf("Orçamento estourado!\n");
  }
  else {
    printf("Gastos dentro do orçamento. \n");
  }


 
  return 0;
}