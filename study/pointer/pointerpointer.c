#include <stdio.h>
#include <locale.h>


//argc = número de argumentos; 
//argv = ponteiro que contém os argumentos, contidos no array de char;
//envp = ponteiro de array de char que contém as variáveis de ambiente;
int main (int argc, char *argv[], char *envp[]) {
  setlocale(LC_ALL, "Portuguese");

  int i; // 4 bytes alocados para um int32;

  printf("o endereço de i: %p\ntamanho de i: %zu\n\n", &i, sizeof i);

  int *p = NULL;  // 8 bytes alocados para um *p64;
  printf("o endereço de p: %p\ntamanho de p: %zu\n\n", &p, sizeof p);

  printf("conteúdo de p: %p\n\n", p);

  printf("p = &i\n\n");
  p = &i; // p recebe endereço da variável i;

  printf("conteúdo de p: %p\n\n", p);

  printf("Conteúdo de i: %d\n\n", i);
  *p = 9; //endereço contido em p(i) recebe o conteúdo 9; 
  printf("*p = 9\n\n");

  printf("Conteúdo no endereço contido em p: %d\n", *p);
  printf("Conteúdo de i: %d\n\n", i);

  
  int *j = NULL; //inicializando um ponteiro j;

  printf("Endereço pra onde j aponta antes de receber o malloc: %p\n", j);

  j = malloc(sizeof (int)); //alocando pra ele o tamanho de um inteiro malloc = memory allocation;
  
  printf("Endereço pra onde j aponta após receber a função malloc: %p\n", j); //endereço que a função 'malloc' retornou;

  *j = 9;

  printf("Valor em j: %d\n", *j);
  free(j); //lembrar de SEMPRE liberar a memória alocada logo após a última utilização;

  return 0;
}
