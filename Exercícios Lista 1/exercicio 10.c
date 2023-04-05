/*

10. Uma loja vende seus produtos no sistema de entrada e duas prestações, sendo a entrada maior do que ou igual às duas prestações, que devem ser iguais, inteiras e as maiores possíveis. Exemplo:
a. Se o valor da mercadoria for de R$ 270,00, a entrada e as duas prestações são iguais a R$ 90,0;
b. Se o valor da mercadoria for de R$ 302,75, a entrada será de 102,75 e as duas prestações serão iguais a R$ 100,00.
Escreva um algoritmo que receba o valor da mercadoria como entrada e forneça como saída o valor da entrada e das duas prestações, de acordo com as regras acima. Observe que uma justificativa para a adoção desta regra é que ela facilita a confecção e o conseqüente pagamento dos boletos das duas prestações.
  

*/

#include<stdio.h>
#include<stdlib.h>

int main(){

  int parcela;
  float compra, entrada;

  printf ("Qual o valor da compra?\n ");
  scanf ("%f", &compra);

  parcela = compra / 3;

  entrada = compra - (2*parcela);

  printf("O valor da sua entrada é de: R$%.2f e restarão duas parcelas no valor de R$%d cada uma.\n",entrada, parcela);

  return 0;

}