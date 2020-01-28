#include <stdio.h>
#include <locale.h>

int testpt(int *x, int *y) { 
  return (*x + *y);
}


int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int a = 3, b = 5, soma;

  soma = testpt(&a, &b);

  printf("Resultado da soma: %d\n", soma);

}
