/*


13. Elabore um algoritmo que receba três números como entrada e forneça como saída esses números ordenados de forma crescente. Exemplo:
 Se a entrada for 10, 3 e 1, o algoritmo deve fornecer como saída 1, 3 e 10;
 Se a entrada for 2, 7, 4, o algoritmo deve fornecer como saída 2, 4 e 7;
 Se a entrada for 11, 45, e 100, o algoritmo deve fornecer como saída 11, 45 e 100.

*/

#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
  
  setlocale(LC_ALL, "Portuguese");

  int numero [3];
  int i, j, temporario;

  for (i = 0; i < 3; i++){
  printf("Digite o número de posição: %d:  \n", i + 1);
  scanf("%d", &numero[i]);
  }

  for (i = 0; i < 2; i++) {
        for (j = i + 1; j < 3; j++) {
            if (numero[i] > numero[j]) {
                temporario = numero[i];
                numero[i] = numero[j];
                numero[j] = temporario;
            }
        }
    }

  printf("Os números digitados foram: ");
  for (i = 0; i < 3; i++) {
        printf("%d ", numero[i]);
    }
  

  return 0;
}