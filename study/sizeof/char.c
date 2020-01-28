#include <stdio.h>
#include <locale.h>

int main(void){ 
  //unsigned = sem sinal
  //signed = com sinal

  char c;
  setlocale(LC_ALL, "Portuguese");

  printf("O tamanho de C é: %lu bytes / %lu bits.\n", sizeof c, sizeof c*8);
  printf("O tamanho do tipo char é: %lu.\n", sizeof (char));
 
  c = 255;
  printf("Valor de c: %i.\n", c);

  return 0;
}
