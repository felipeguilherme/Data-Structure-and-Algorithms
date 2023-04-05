/*

7. Um professor atribui pesos de 1 a 4 para as notas de quatro avaliações.
A nota é calculada por meio da média ponderada (N1 + N2*2 + N3*3 + N4*4)/10, onde N1 é a nota da primeira avaliação, N2 a da segunda, etc. Um aluno tirou as seguintes notas: 8 - 7,5 - 10 - 9. Faça um programa que calcula e mostra as notas e a média deste aluno.
  

*/

#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");
  float N1, N2, N3, N4, media;

  printf("Digite as quatro notas do aluno em sequência:\n");
  scanf("%f%f%f%f", &N1, &N2, &N3, &N4);

  media = (N1 + N2*2 + N3*3 + N4*4)/10;


  printf("As notas do aluno foram: %.2f, %.2f, %.2f e %.2f\n", N1, N2, N3, N4);
  printf("A média ficou: %.2f\n", media);
  

  return 0;
}