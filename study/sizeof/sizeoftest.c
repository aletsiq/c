#include <stdio.h>

int main(void){
  float f;
  int i;
  
  printf("O tamanho de i(inteiro): %zu bytes / %zu bits.\n", sizeof (int),
      sizeof i*8);
  printf("O tamanho de f(float): %zu bytes / %zu bits.\n", sizeof(float),
      sizeof f*8);
  i = 2147483649;
  f = 2147483649;
  printf("O tamanho de i:%i\n", i);
  printf("O tamanho de f:%i\n", f);
}
