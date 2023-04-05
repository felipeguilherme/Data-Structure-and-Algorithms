/*

  16. Uma determinada farmácia utiliza a seguinte tabela de descontos para os seus medicamentos vendidos:
A = 10%;
B = 15%;
C = 20%;

Elabore um algoritmo que receba o valor de um medicamento e a sua classe como entrada, calcule o valor do desconto e forneça como saída o desconto calculado e o valor final do medicamento. Exemplo:
 Se a entrada for R$ 97,00 e classe A, a saída será R$ 9,70 de desconto e valor final do medicamento R$ 87,30;
 Se a entrada for R$ 100,00 e classe C, a saída será R$ 20,00 de desconto e valor final do medicamento R$ 80,00.

*/
#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  char classe;
  float valor, desconto;

  printf("Digite o valor do medicamento:\n");
  scanf("%f", &valor);

  printf("O medicamento possui classe A, B ou C?\n");
  scanf("%s", &classe);

  classe = tolower(classe);

  switch(classe) {
    case 'a':
      desconto = valor * 0.1;
      break;
    case 'b':
      desconto = valor * 0.15;
      break;
    case 'c':
      desconto = valor * 0.2;
      break;
    default:
      printf("Classe inválida\n");
      return 1;
  }

  valor = valor - desconto;

  printf("Seu medicamento classe %c teve %.2f de desconto e você pagará %.2f\n", classe, desconto, valor);
  
  
  return 0;
}