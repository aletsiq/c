#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
  setlocale(LC_ALL, "Portuguese"); 
  float f = 1;
  long double d = 1; // precisão extendida
  // double d = 1;  dupla precisão
  // float f = 3e2; 3* 10^2

  printf("O tamanho de f(float) é: %zu bytes / %zu bits.\n", sizeof f, sizeof f*8);
  printf("O tamanho de d(long double) é: %zu bytes / %zu bits.\n", sizeof d, sizeof d*8);
  printf("Valor de f: %.2f.\n", f);

  return 0;
}
