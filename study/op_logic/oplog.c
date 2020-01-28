#include <stdio.h>
#include <locale.h>

/*
 *Conjunção && (E, AND)
 * 0 0 - 0 - Falso
 * 0 1 - 0 - Falso
 * 1 0 - 0 - Falso
 * 1 1 - 1 - Verdadeiro
 *
 * Disjunção || (OU, OR)
 * 0 0 - 0 - Falso
 * 0 1 - 1 - Verdadeiro
 * 1 0 - 1 - Verdadeiro
 * 1 1 - 1 - Verdadeiro
 * 
 * Negação !()
 * nega as acima.
*/

/* >, <, ==, !=, >=, <= */

int main(void){
  setlocale(LC_ALL, "Portuguese"); 
  int a = 8;
  int b = 8;
  
  printf("%d\n", !(!(32 > 8) && 3 == 9));

  return 0;
}
