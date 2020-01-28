#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
  setlocale(LC_ALL, "Portuguese"); 
  size_t c[3];

  printf("O tamanho de size_t é:%zu\n", sizeof(size_t));
  printf("O tamanho de c é: %zu\n", sizeof c); //tamanho do array
  printf("O número de elementos do array é: %zu\n", sizeof c / sizeof c[0]); //número de elementos do array
  
  c[0] = 'A';
  c[1] = 0x42;
  c[2] = 67;

  printf("O elemento 0 de c é: %lu\n", c[0]);
  printf("O elemento 1 de c é: %lu\n", c[1]);
  printf("O elemento 2 de c é: %lu\n", c[2]);

  printf("O endereço do Array C em memória: %p\n", c);
  printf("O endereço do Array &C em memória: %p\n", &c);
  printf("O endereço do Primeiro elemento do Array C em memória: %p\n", &c[0]);
  printf("O endereço do Segundo elemento do Array C em memória: %p\n", &c[1]);

  return 0;
}
