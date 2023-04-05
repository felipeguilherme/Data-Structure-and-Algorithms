/*

  9. RACHA CUCA: Refaça o exercício da troca de valores do problema anterior SEM utilizar variável auxiliar

  Solução:

  numero1 = 20;
  numero2 = 10;

  (numero1 = numero1 +/- numero2)
  numero1 = 20 + 10 = 30 (agora o numero1 vale 30)
  numero2 = 30 - 10 = 20 (agora o numero2 vale 20)
  numero1 = 30 - 20 = 10 (agora o numero1 vale 10, o valor que antes estava em numero2)
  

*/

#include <stdio.h>

int main(){
  
  int numero1, numero2;

  printf("Digite o primeiro valor:  \n");
  scanf("%d", &numero1);

  printf("Digite o segundo valor:  \n");
  scanf("%d", &numero2);

  numero1 = numero1 + numero2;
  numero2 = numero1 - numero2;
  numero1 = numero1 - numero2;

  printf("Alterei os valores e agora o valor 1 tem: %d e o valor 2: %d\n", numero1, numero2);
  

  return 0;
}