/* Lista 02 - Exercício 08
8. Elabore um algoritmo que receba dois números ponto-flutuante e verifique se a parte inteira ou a parte fracionária ou ambas as partes são iguais nesses números.

*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

#define TOLERANCE 0.0001

int main(void) {
    setlocale (LC_ALL, "Portuguese");
    float num1, num2; 
    float frac_num1, int_num1;
    float frac_num2, int_num2;


    printf("Informe o primeiro número ponto-flutuante: \n");
    scanf("%f", &num1);

    printf("Informe o segundo  número ponto-flutuante: \n");
    scanf("%f", &num2);

    modff(num1, &int_num1);
    modff(num2, &int_num2);

    frac_num1 = num1 - int_num1;
    frac_num2 = num2 - int_num2;

    if (int_num1 == int_num2 ){
      printf("O valor inteiro é igual\n");
    } else {
      printf("O valor inteiro é diferente\n");
    }

    if (fabs(frac_num1 - frac_num2) < TOLERANCE){
       printf("O valor fracionado é igual\n");
    } else {
       printf("O valor fracionado é diferente\n");
    }

    return 0;
}