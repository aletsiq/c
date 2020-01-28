#include <stdio.h>
#include <locale.h>


int main(void){
  setlocale(LC_ALL, "Portuguese"); 
  int a = 359;
  int chave = 3;

  if (a == -1 && a < 400) {         //checa SE é verdadeiro ou falso
    printf("chave: %d\n", chave);
  }
  else if (a == 359) {              //DO CONTRÁRIO executa e pula pro final
    puts("a é 359");
  }
  else if (a < 500) {
    puts("a é menor que 500");
  }
  else {
    printf("Avaliação do if deu FALSE\n"); //SENÃO executa
    puts("exemplo");
  }

  //ternario
  (a == 3) ? puts("3") : puts("não sei o valor de a");

  printf("a: %d\n", a);

  return 0;
}
