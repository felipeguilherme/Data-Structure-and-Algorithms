/*
4. Elabore um algoritmo que leia como entrada um valor inteiro representando a hora (1,2,3...24) de um relógio. Em seguida o algoritmo de converter a hora lida em minutos utilizando a formula Minutos = hora * 60. Por fim o algoritmo deve mostrar no vídeo a hora lida e a hora convertida em minutos.

*/

#include <stdio.h>

int main(){
  
  int hora, minutos;


  printf("Digite a hora entre 1 e 24 \n");
  scanf("%d", &hora);

  minutos = hora * 60;

  printf("A hora digitada: %d. \n", hora);
  printf("A hora digitada convertida em minutos: %d. \n", minutos);
  

  return 0;
}