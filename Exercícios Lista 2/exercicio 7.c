/*

7. Faça um programa que sorteia um número de 1 a 5 e pede ao usuário que o adivinhe, lendo do teclado o palpite. Caso o usuário acerte ou não, é mostrada uma mensagem apropriada.

*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


int main() {
  setlocale(LC_ALL, "Portuguese");

  int palpite, numero; 

  printf("Digite um número entre 1 e 5:\n");
  scanf("%d", &palpite);

  if (palpite < 1 || palpite > 5) {
        printf("Numero invalido!\n");
        return 1; }

  srand(time(NULL));
  numero = rand() % 5 + 1;

  if (numero == palpite){
    printf("Acertou, monstrão. Você é pica! O número sorteado era %d mesmo.\n", numero);
  } else {
    printf("O número sorteado foi %d, mais sorte na próxima!\n", numero);
  }
  
  return 0;
}