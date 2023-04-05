/*

04 - Algoritmo para saber se o número digitado é par ou ímpar e se é divisível por 5. 


*/

#include <stdio.h>
#include <locale.h>


int main (){
  setlocale (LC_ALL, "Portuguese");

  int valor;

  printf("Digite o valor desejado:\n");
  scanf("%d", &valor);

  if (valor % 2 == 0 && valor % 5 == 0){
    printf("Valor digitado é par e é divisível por 5.\n");
  }
  else if (valor % 2 == 0 && valor % 5 != 0){
    printf("Valor digitado é par e não é divisível por 5.\n");
  }
  else if (valor % 2 != 0  && valor % 5 == 0){
    printf("Valor digitado é ímpar e divisível por 5. \n");
  }
  else {
    printf("Valor digitado é ímpar e não é divisível por 5. \n");
  }


 
  return 0;
}