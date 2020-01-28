#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//macro copia e cola, função executa fora da main, macro funciona mais rápido

#define MALLOC(p, size) { \
  p = malloc(size); \
  if (p == NULL) { \
    fprintf(stderr, "Memória insuficiente\n"); \
    exit(1); \
  } \
}


//função pra testar espaço em memória;
// void *malloc_s(size_t size);


int main (int argc, char *argv[], char *envp[]) {
  setlocale(LC_ALL, "Portuguese");

  int *p;
  unsigned int i;

  MALLOC(p, 5 * sizeof(int)); //alocação de memória de 5 bytes
  
  memset(p , 0, 5); // inicializa com 0 os 20(4*5) bytes usados no ponteiro p;
  
  *p = 9;
  *(p+1) = 43;
  *(p+2) = 65;
  *(p+3) = 11;
  *(p+4) = 23;
  *(p+4) = 23;
  *(p+5) = 25;

  p = realloc(p, sizeof(int) * 6); // realocação pra 6

  for(i = 0; i < 6; i++) {
    printf("%d\n", *(p+i));
  }


  free(p);

  return 0;
}

void *malloc_s(size_t size) {
  void *p;
  p = malloc(size);
  if (p == NULL) {
    fprintf(stderr, "Memória insuficiente.\n"); //escreve direto na saída de erro padrão;
     exit(1);//exit
  }
}
