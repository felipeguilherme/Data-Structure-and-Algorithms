/*

 Elabore um algoritmo que calcule as raízes de uma equação do segundo grau. O algoritmo deve receber como entrada os valore do coeficiente a, b e c e mostrar como saída às raízes da equação. Lembrete: uma equação do 2o grau tem a forma: ax2 + bx + c, onde a, b e c são os coeficientes da equação;

*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main() {
  setlocale(LC_ALL, "Portuguese");
  
  float a, b, c, delta, x1, x2;

  printf("Digite o valor a:\n");
  scanf("%f", &a);
  
  printf("Digite o valor  b:\n");
  scanf("%f", &b);

  printf("Digite o valor  c:\n");
  scanf("%f", &c);

  delta = (b*b) - 4 * a * c;

  if (delta < 0){
    printf("Sua equação não possui raízes\n");
  } else if (delta == 0) {
    x1 = -b / (2 * a);
    printf("Sua equação possui uma raíz de valor: %.2f\n", x1);
  } else {
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    printf("Sua equação possui duas raízes de valores: %.2f e %.2f\n", x1, x2);
    
  }
  
  return 0;
}