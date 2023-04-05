/*


5. Um casal divide as despesas domésticas mensalmente. Durante o mês cada um anota seus gastos e as contas que paga; no final eles dividem entre si com o homem pagando 65% e a mulher pagando 35%. O casal deseja um programa que facilite o acerto: eles digitariam os gastos de cada um, e o programa mostraria quem deve a quem. Por exemplo, em um determinado mês o total gasto foi de 2.153,90 com o marido pagando 1.278,60 e a esposa pagando 875,30. Escreva um programa que, a partir dos valores que cada um gastou, calcule o valor que cada um deveria ter gastado e informe o quanto ficou a diferença entre aquilo que foi efetuado.

*/

#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
  
  setlocale(LC_ALL, "Portuguese");

  float marido, mulher, resto, total, porc_marido, porc_mulher;

  printf("Quanto foi gasto pelo marido?\n");
  scanf("%f", &marido);

  printf("Quanto foi gasto pela esposa?\n");
  scanf("%f", &mulher);

  total = marido + mulher;

  porc_marido = total * 0.65;
  porc_mulher = total * 0.35;

  resto = fabs((marido - porc_marido)) + fabs((mulher - porc_mulher)) / total*100;

  printf("O homem deveria ter gasto: %.2f e a esposa: %.2f\n.", porc_marido, porc_mulher);
 

  if (resto < 0){
    printf("O marido precisa ressarcir a esposa com %.2f.\n", -resto);
  } else if (resto > 0){
    printf("A esposa precisa ressarcir o marido com %.2f.\n", resto);
  } else {
    printf("A quantia paga pelos dois foi correta.\n");
  }
  

  return 0;
}