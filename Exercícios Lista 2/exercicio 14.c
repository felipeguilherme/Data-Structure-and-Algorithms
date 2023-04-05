/*


14. Considere uma escola que adote no seu processo de avaliação a realização de quatro avaliações bimestrais e que o regime de aprovação dos alunos seja o seguinte:

  // Aprovado >= 7.0
  // Reprovado < 5.0
  // Recuperação >= 5.0 

*/

#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {

  // Aprovado >= 7.0
  // Reprovado < 5.0
  // Recuperação >= 5.0 

  
  setlocale(LC_ALL, "Portuguese");

  float nota1, nota2, nota3, nota4, notafinal, media, ponderada;


  printf("Qual a primeira nota: ");
  scanf("%f", &nota1);
  printf("Qual a segunda nota: ");
  scanf("%f", &nota2);
  printf("Qual a terceira nota: ");
  scanf("%f", &nota3);
  printf("Qual a quarta nota: ");
  scanf("%f", &nota4);

  media = (nota1 + nota2 + nota3 + nota4)/4;

  if (media >= 7.0){
    printf("O aluno está aprovado com média %.2f\n", media);
    return 1;
  } else if (media < 5.0) {
    printf("O aluno está reprovado com média %.2f\n", media);
    return 1;
  } else {
    printf("O aluno precisou de uma nova avaliação porque ficou com média %.2f\n", media);
  }

  printf("Qual a nota final: ");
  scanf("%f", &notafinal);

  // Aprovado se média final for igual ou superior a 5.5

  ponderada = ((media * 6)+(notafinal * 4)) / 10.0;

  if (ponderada >= 5.5){
    printf("Aluno está aprovado com média %.2f", ponderada);
  } else {
    printf("O aluno está reprovado com média %.2f", ponderada);
  }


 
  return 0;
}