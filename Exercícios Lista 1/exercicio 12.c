/*

  12. Um algoritmo para gerenciar os saques de um caixa eletrônico deve possuir algum mecanismo para decidir o número de notas de cada valor que deve ser disponibilizado para o cliente que realizou o saque. Um possível critério é o da “distribuição ótima” no sentido de que as notas de menor valor são distribuídas em número mínimo possível.

  Exemplo:
a. Se a quantia solicitada for R$ 6,00, o algoritmo dever indicar uma nota de R$ 5,00 e uma nota de R$ 1,00;
b. Se a quantia solicitada for R$ 17,00, o algoritmo deve indicar uma nota de R$ 10,00, uma nota de R$ 5,00 e duas notas de R$ 1,00;
c. Se a quantia solicitada for R$ 87,00, o algoritmo deve indicar uma nota de R$ 50,00, três notas de R$ 10,00, uma nota de R$ 5,00 e duas notas de R$ 1,00;

Escreva um algoritmo que receba o valor da quantia solicitada e retorne a distribuição das notas de acordo com o critério da distribuição ótima. Considere que só existem notas de R$ 50,00, R$ 10,00, R$ 5,00 e R$ 1,00.

*/
#include <stdio.h>

int main() {
  int saque, saquefinal;
  int nota50 = 0,
      nota10 = 0,
      nota5 = 0,
      nota1 = 0;
    
    printf("Digite o valor do saque: ");
    scanf("%d", &saque);

    saquefinal = saque;

    nota50 = saque / 50;
    saque = saque % 50;
    
    nota10 = saque / 10;
    saque = saque % 10;
    
    nota5 = saque / 5;
    saque = saque % 5;
    
    nota1 = saque;

    printf("Seu saque total: %d\n", saquefinal);
    
     if (nota50 != 0){
       printf("Notas de R$ 50,00: %d\n", nota50);
    }
     if (nota10 != 0){
       printf("Notas de R$ 10,00: %d\n", nota10);
    }
     if (nota5 != 0){
       printf("Notas de R$ 5,00: %d\n", nota5);
    }
     if (nota1 != 0){
       printf("Notas de R$ 1,00: %d\n", nota1);
    }
     
    return 0;
}