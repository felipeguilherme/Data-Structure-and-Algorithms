/*
11. Escreva um algoritmo que converta um intervalo de tempo dado em minutos para um intervalo de tempo dado em horas, minutos e segundos. Exemplo:
a. Sea entrada for 87 min, o algoritmo deve fornecer como saída 1 h 27 min e 0 seg;
b. Sea entrada for 121,5 min, o algoritmo deve fornecer como saída 2 h 1 min e 30 seg;
c. Sea entrada for 145,87 min, o algoritmo deve fornecer como saída 2 h 25 min e 52,2 seg;
  
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

  int hora, minutos;
  float sobraminutos, segundos;

  printf ("Digite a quantidade de minutos que deseja converter:  ");
  scanf ("%f", &sobraminutos);

  hora = sobraminutos / 60;
  minutos = (int)sobraminutos % 60;
  segundos = (sobraminutos - (int)sobraminutos) * 60;
  
  printf("Os minutos digitados foram convertidos e viraram %d h %d min e %.1f seg \n", hora, minutos, segundos);

  return 0;

}