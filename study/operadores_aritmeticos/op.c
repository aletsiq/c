#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>
#include <locale.h>

/*
 * = atribuição
 * + - unarios
 * + - binarios (adição e subtração)
 * * / (multiplicação e divisão)
 * % (resto da divisão)
 * ++(incremento)
 * --(decremento)
 * unários > binários 
 * parenteses > multiplicação / divisão > adição / subtração
 * ++a pré incremento
 * a++ pós incremento
*/

int main(void){
  setlocale(LC_ALL, "Portuguese"); 
  int a;

  a = (4 + 2) * 3;

  printf("%d\n", ++a);

  return 0;
}
