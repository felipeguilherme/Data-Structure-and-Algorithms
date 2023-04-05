/*
Lista 01, Exercício 3
3. Escrever um algoritmo para calcular a média de 3 números dados lidos pelo teclado.

*/

#include <stdio.h>

int main(){

  float  valor1, valor2, valor3, media;

  printf("Qual o primeiro valor?\n");
  scanf("%f", &valor1);

  printf("Qual o segundo  valor?\n");
  scanf("%f", &valor2);

  printf("Qual o terceiro  valor?\n");
  scanf("%f", &valor3);

  media = (valor1 + valor2 + valor3) / 3.0;

  printf("A media dos valores fica em: %.2f \n", media);

  return 0;
}