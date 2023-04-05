/*
1. Elabore um algoritmo que receba um número inteiro como entrada e forneça como saída o algarismo da casa das unidades desse número. Exemplo:
 Se a entrada for 23, o programa deve fornecer como saída o valor 3;
 Se a entrada for 112, o programa deve fornecer como saída o valor 2;
 Se a entrada for 9, o programa deve fornecer como saída o valor 9.
  
*/

#include <stdio.h>

int main() {

  int entrada, final;
  
   printf("Digite o valor desejado:  ");
   scanf("%d", &entrada);

   final = entrada % 10;
  
   printf("Seu algarismo final: %d\n", final);

   
   return 0;
}