/*
  
6. Faça um programa que recebe um valor de temperatura em Fahrenheit e mostre-o na tela em grau Celsius
(fórmula: C = 5/9*(F-32)).

(32°F − 32) × 5/9 = 0°C


*/

#include <stdio.h>

int main(){
  
  float temp_f, temp_c;

  printf("Vamos converter a temperatura de Fahrenheit para Celsius! \n");
  printf("Digite a temperatura em Fahrenheit: \n");
  scanf("%f", &temp_f);

  temp_c = (temp_f - 32) * 5/9;


  printf("A temperatura digitada em Fahrenheit foi  %.2f, que virou %.2f Celsius. \n", temp_f, temp_c);
  

  return 0;
}