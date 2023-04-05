/*


12. Elabore um algoritmo que receba três números como entrada e forneça como saída o maior desses 3 números. Exemplo:
 Se a entrada for 10, 3 e 1, o algoritmo deve fornecer como saída o valor 10;
 Se a entrada for 2, 7, 4, o algoritmo deve fornecer como saída o valor 7;

*/

#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
  
  setlocale(LC_ALL, "Portuguese");

  float numero1, numero2, numero3, maior;

  printf("Digite três números: \n");
  scanf("%f%f%f", &numero1, &numero2, &numero3);

  maior = fmax(numero1, fmax(numero2, numero3));

  printf("O maior número digitado é o: %.1f.\n", maior);
 
  

  return 0;
}