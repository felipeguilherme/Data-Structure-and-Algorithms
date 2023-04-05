/*

15. Elabore um algoritmo que receba 3 valores como entrada e verifique se esses valores podem ser lados de um triangulo o entrada podem ser lados de um triângulo. Lembrete: três valores podem ser lados de um triângulo somente se cada um desses valores for menor que a soma dos outros dois.


*/

#include <stdio.h>
#include <locale.h>


int main (){
  setlocale (LC_ALL, "Portuguese");

  float num1, num2, num3;

  printf("Digite o primeiro valor: ");
  scanf("%f", &num1);

  printf("Digite o segundo valor: ");
  scanf("%f", &num2);

  printf("Digite o terceiro valor: ");
  scanf("%f", &num3);

  if (num1 < num2 + num3 && num2 < num1 + num3 && num3 < num2 + num1){
    printf("Os valos podem ser lados de um triângulo. \n");
  } else {
    printf("Os valores não podem ser lados de um triângulo");
  }
  

 
  return 0;
}