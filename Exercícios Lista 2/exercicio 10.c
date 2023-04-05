/*

10. Elabore um programa que lê os nomes e as notas de três alunos e informa na tela qual aluno tirou a maior nota, qual aluno tirou a nota do meio e qual aluno tirou a menor nota.

*/

#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
  
  setlocale(LC_ALL, "Portuguese");

  char nome1[50], nome2[50], nome3[50];
  float nota1, nota2, nota3, nota_maior, nota_menor, nota_meio;

  printf("Qual o nome e nota do aluno número 1?\n");
  scanf("%s %f", &nome1, &nota1);

  printf("Qual o nome e nota do aluno número 2?\n");
  scanf("%s %f", &nome2, &nota2);

  printf("Qual o nome e nota do aluno número 3?\n");
  scanf("%s %f", &nome3, &nota3);

  nota_maior = fmax(nota1, fmax(nota2, nota3));
  nota_menor = fmin(nota1, fmin(nota2, nota3));
  nota_meio = nota1 + nota2 + nota3 - nota_maior - nota_menor;
    
  printf("O aluno com a maior nota foi %s, com nota %.1f.\n", nota_maior == nota1 ? nome1 : nota_maior == nota2 ? nome2 : nome3, nota_maior);
  printf("O aluno com a nota do meio foi %s, com nota %.1f.\n", nota_meio == nota1 ? nome1 : nota_meio == nota2 ? nome2 : nome3, nota_meio);
  printf("O aluno com a menor nota foi %s, com nota %.1f.\n", nota_menor == nota1 ? nome1 : nota_menor == nota2 ? nome2 : nome3, nota_menor);

return 0;
}