#include <stdio.h>
#include <locale.h>

int main(void){
  setlocale(LC_ALL, "Portuguese"); 

  int i = 2019;  //declaração de uma variável inteira(4bytes) com o valor 2017
  int *p; //declaração de um ponteiro p 

  p = &i; //conteúdo do ponteiro p apontando pro endereço da variável i

  printf("A endereço da variável i em memória é: %p\n", &i); //exibindo endereço de i
  printf("A endereço da variável p em memória é: %p\n", p); //exibindo o endereço de p
  printf("O valor de i é: %d\n", *p); //exibindo o valor dentro de p, dentro do endereço i

  return 0;
}
