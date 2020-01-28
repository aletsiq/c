#include <stdio.h>
#include <locale.h>

int testpt(int *x, int *y) {  //recebe ponteiro p e p2 que apontam pras variáveis a e b;
  return (*x + *y);
}

int testpt2(int *x, int*y){
  return (*x - *y);
}

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int a = 3, b = 5, soma, sub;
  int *p = &a; //ponteiro 'p' recebe endereço de memória de a;
  int *p2 = &b; //ponteiro 'p2' recebe endereço de memória de b;
  int *p3 = &soma; //ponteiro 'p3' recebe endereço de memória da soma;

  soma = testpt(p, p2);
  sub = testpt2(p, p3);

  printf("valor de a em p = %d\n", *p); //imprime valor que está dentro do endereço de memória de a;
  printf("p = %p\n", p); //imprime o endereço de memória de p;
  printf("a = %p\n", &a); //imprime o valor de endereço de memória de a;
  printf("Resultado da soma: %d\n", soma);
  printf("Resultado da subtração 3 - soma: %d\n", sub);

}
