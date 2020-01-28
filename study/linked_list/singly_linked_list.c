#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct lista {
  int elemento;
  struct lista *prox;

}celula;

void insereInicio (celula **inicial, int n) {
  
  celula *novo;
  novo = malloc(sizeof(celula));
  novo -> elemento = n;

  if (*inicial == NULL) {
    novo -> prox = NULL;
    *inicial = novo;
  }else {
    novo -> prox = *inicial;
    *inicial = novo;
  }
}

 void printar (celula *inicial) {
 
   celula *aux;
   aux = inicial;

   if (aux == NULL) {
      printf("Não existem elementos na lista.");
   }else {
     do {
       printf("[%d] -> ", aux->elemento);
       aux = aux->prox;
    }while(aux !=NULL);
  }
}

int main() {
  setlocale(LC_ALL, "Portuguese");
 
  int num;

  celula *inicial = NULL;


  printf("Digite um elemento para inserir no começo da lista: ");
  scanf("%d", &num);
  printar(inicial);
  insereInicio(&inicial, num);
}
