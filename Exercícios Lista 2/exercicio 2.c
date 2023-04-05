/*

2. Elabore um algoritmo que receba como entrada um número com 2 algarismos e forneça como saída o algarismo da casa das dezenas desse número. Exemplo:
 Se a entrada for 23, o algoritmo deve fornecer como saída o valor 2;
 Se a entrada for 12, o algoritmo deve fornecer como saída o valor 1;
 Se a entrada for 9, o algoritmo deve fornecer como saída o valor 0.

*/
#include <stdio.h>
#include <locale.h>


int main() {
  setlocale(LC_ALL, "Portuguese");

  int valor, casa;

  printf("Digite um número de até dois algarismos:\n");
  scanf("%d", &valor);

  casa = valor / 10;

  printf("A casa decimal é: %d\n", casa);
  
  
  return 0;
}