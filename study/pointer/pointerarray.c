#include <stdio.h>
#include <locale.h>

int main(void){
  setlocale(LC_ALL, "Portuguese"); 
  int a[2] = {30, 35}; //array de inteiros, cada elemento ocupa 4 bytes de memória.

  printf("a[0] = %d\na[1] = %d\n", *a, *(a+1)); //exibindo os dois elementos do array por ponteiros.

  return 0;
}
