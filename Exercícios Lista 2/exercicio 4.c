/*

4. Um eletricista precisa comprar fio que irá passar, pelo telhado, por toda a diagonal de uma casa de formato retangular. Como ele não tem condições de medir a diagonal com precisão a solução que ele encontrou foi medir os lados da casa, sabendo que a diagonal pode ser calculada com base nos lados pelo Teorema de Pitágoras (a2 = b2 + c2). Leia os valores dos lados da casa em metros e faça um programa que calcule a quantidade mínima necessária de fio a ser comprada com precisão de centímetros.

*/

#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
  
  setlocale(LC_ALL, "Portuguese");

  int fio;
  float altura, base, resultado;

  printf("Digite a altura do imóvel em metros:\n");
  scanf("%f", &altura);

  printf("Digite a base do imóvel em metros:\n");
  scanf("%f", &base);

  resultado = sqrt((altura * altura) + (base * base));
  fio = (int)ceil(resultado * 100);

  printf("Você vai precisar de %d centimetros de fio.\n", fio);
  

  return 0;
}