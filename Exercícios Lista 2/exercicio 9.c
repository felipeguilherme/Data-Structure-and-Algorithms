/*

9. Elaborar programa que lê dois números quaisquer e mostra na tela uma mensagem indicando qual é o maior, ou se são iguais.

*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
  setlocale(LC_ALL, "Portuguese");
  
  float valor1, valor2;

  printf("Qual o primeiro valor: ");
  scanf("%f", &valor1);

  printf("Qual o segundo valor: ");
  scanf("%f", &valor2);

  if (valor1 == valor2){
    printf("Valores informados são iguais.\n");
  } else if (valor1 > valor2){
      printf("%.2f é maior que %.2f", valor1, valor2);
    } else {
    printf("%.2f é maior que %.2f", valor2, valor1);
  }
  
  return 0;
}