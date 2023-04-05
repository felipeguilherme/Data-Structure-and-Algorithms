/*

  
14. O Teorema de Pitágoras estabelece a seguinte relação “Em qualquer triângulo retângulo, o quadrado da hipotenusa é igual à soma dos quadrados dos catetos”. Crie um programa para ler os valores da hipotenusa e dos catetos e identificar se o triângulo é ou não retângulo.

*/
#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int hipo, cateto1, cateto2, soma;

  printf("Digite o valor da hipotenusa:\n");
  scanf("%d", &hipo);

  printf("Digite os valores dos catetos:\n");
  scanf("%d%d", &cateto1, &cateto2);

  soma = (cateto1*cateto1) + (cateto2*cateto2);
  hipo = (hipo*hipo);

  if (soma == hipo){
    printf("Seu triângulo é um triângulo retângulo, a soma do quadrado dos catetos é igual ao quadrado da hipotenusa\n");

  } else {
    printf("Seu triângulo não é um triângulo retângulo\n");
  }

 
  
  return 0;
}