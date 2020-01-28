#include <stdio.h>
#include <stdbool.h> //incluindo a bibliotecas de boleanos

int main(void){
  bool b;

  printf("O tamanho de b(bool): %lu\n", sizeof b);//exibindo o tamanho do bool
  
  b = false; //declarando o boleano como falso
  printf("O valor de b: %i\n", b); //exibindo o valor do boleano

  return 0;
}
