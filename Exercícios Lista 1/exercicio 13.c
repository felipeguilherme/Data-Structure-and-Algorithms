/*

  
13. Escreva um algoritmo que receba como entrada um intervalo de tempo dado em segundos e converta este valor para um intervalo de tempo dado em horas, minutos e segundos. Exemplo:
a. Sea entrada for 5220 seg, o algoritmo deve fornecer como saída 1 h 27 min e 0 seg;
b. Sea entrada for 7290 seg, o algoritmo deve fornecer como saída 2 h 1 min e 30 seg;
c. Sea entrada for 8752,2 seg, o algoritmo deve fornecer como saída 2 h 25 min e 52,2 seg.

*/
#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  float entrada, segundos, restante;
  int hora, minutos;

  printf("Quantos segundos deseja converter?\n ");
  scanf("%f", &entrada);

  hora = (int)entrada / 3600;
  restante = (int)entrada % 3600;
  minutos = (int)restante / 60;
  segundos = (int)restante % 60;

  printf("Convertidos, os segundos digitados viram: %d h, %d min e %.1f segundos.\n", hora, minutos, segundos);

  
  
  return 0;
}