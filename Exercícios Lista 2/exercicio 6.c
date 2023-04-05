/*

 6. Escrever um programa que lê dois números e efetua uma divisão, mas somente se o divisor for diferente de zero; quando isto ocorrer, é mostrada uma mensagem de erro apropriada.

*/

#include <stdio.h>
#include <locale.h>


int main() {
  
  setlocale(LC_ALL, "Portuguese");
  float divide1, divide2, resto;

  printf("Digite os dois números a serem dividios: \n");
  scanf("%f %f", &divide1, &divide2);


  if (divide2 == 0){
    
    printf("Divisor inválido\n");
    
  } else {

    resto = divide1 / divide2;
    printf(" %.2f / %.2f = %.2f \n", divide1, divide2, resto);

  }