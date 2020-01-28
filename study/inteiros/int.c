#include <stdio.h>
#include <locale.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void){ 
  setlocale(LC_ALL, "Portuguese");
  register int i = 1;
// size_t i; sizeof i;
// long long i = LLONG_MAX; long long = dobro de long; não muito utilizado
// long i; 16bytes 64bits; aumenta para o máximo;
// uint8_t i = UCHAR_MAX; uint = unsigned int; uchar_max = caractere maximo do char 4bytes 8bits;
// short i; diminui o espaço necessário para guardar a variável

  printf("O tamanho de i(int) é: %zu bytes / %zu bits.\n", sizeof i, sizeof i*8);
  printf("Valor de i: %d.\n", i);

  return 0;
}
