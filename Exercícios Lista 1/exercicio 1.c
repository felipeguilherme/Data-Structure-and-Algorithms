/*
Lista 01, Exercício 01
Fazer um algoritmo para somar 2 números inteiros lidos pelo teclado.

*/

#include <stdio.h>

int main(){

  int  valor1, valor2;

  printf("Qual o primeiro valor?\n");
  scanf("%d", &valor1);

  printf("Qual o segundo  valor?\n");
  scanf("%d", &valor2);


  printf("O valor total fica em: %d \n", valor1 + valor2);

  return 0;
}
