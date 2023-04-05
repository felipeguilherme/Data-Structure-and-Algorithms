/*

3. Elabore um algoritmo que faça arredondamento de um número positivo de acordo com a regra usual: se a parte fracionária é maior do que ou igual a 0.5, o número é arredondado para o inteiro subseqüente; caso contrário, é arredondado para o inteiro anterior. Exemplo:
 Se a entrada for 7.8, o algoritmo deve fornecer como saída o valor 8;
 Se a entrada for 7.2, o algoritmo deve fornecer como saída o valor 7;
 Se a entrada for 7.5, o algoritmo deve fornecer como saída o valor 8.

*/
#include <stdio.h>
#include <math.h>
#include <locale.h>


int main() {
  setlocale(LC_ALL, "Portuguese");

  float valor, casa;

  printf("Digite um número real:\n");
  scanf("%f", &valor);

  casa = roundf(valor);

  printf("A casa decimal é: %.2f\n", casa);
  
  
  return 0;
}