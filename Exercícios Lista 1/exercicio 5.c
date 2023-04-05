/*
  
5. Refaça o exercício anterior para que a hora agora seja um valor não inteiro (float).

*/

#include <stdio.h>

int main(){
  
  float hora;
  int minutos;


  printf("Digite a hora desejada: \n");
  scanf("%f", &hora);

  minutos = (hora * 60);

  printf("A hora digitada: %.2f. \n", hora);
  printf("A hora digitada em minutos: %d. \n", minutos);
  

  return 0;
}