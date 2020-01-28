#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//conteúdo da lista;
typedef struct no {
  int n; //elemento que pode ser char ou até outra struct;
  struct no *prox;  //ponteiro apontando para o próximo;
}Tno;


//função de inserir no inicio da lista, recebendo como parâmetro a própria lista;
Tno* inserir_inicio (Tno *inicio, int x) {
  Tno *aux; //criando um ponteiro auxiliar;
  aux = malloc(sizeof(Tno)); //alocando memória dinâmica para a struct;

  aux -> n = x; //o novo nó que aponta pra n(struct) recebe o dado x da main;
  

  //checando se existe algum elemento no ínicio da lista;
  if(inicio == NULL) {
    inicio = aux; //o inicio da lista aponta para o aux;
    aux -> prox = NULL; //o ponto proximo aponta para nulo;
  }else {
    aux -> prox = inicio; //aux aponta pro prox do ínicio;
    inicio = aux; //inicio aponta pra auxiliar;
  }
  return inicio; //retornando o valor inicial atualizado;
}

//função de impressão de lista
void imprimir(Tno *inicio) {
  Tno *aux; //criando um nó auxiliar para 'copiar' a lista;

  if (inicio == NULL)
  {
    printf("Lista vazia!");
  }else {
     aux = inicio; //auxiliar recebe inicio para manter a lista intacta;
  }
  while(aux != NULL){
    printf("[%p] (%d %p) ", aux, aux -> n, aux -> prox); //printando endereço, elemento e o próximo da lista;
    aux = aux -> prox; //auxiliar apontando para o próximo dele mesmo;
   }
}

Tno* insere_fim (Tno *inicio, int x) {
  Tno *aux, *cont; //criando dois auxiliares para preservar a lista original;
  aux = malloc(sizeof(Tno));
  aux -> n = x; //auxiliar recebe dado da struct(n) que no caso é um inteiro(x);
  aux -> prox = NULL; //proximo é NULL porque o próximo do fim sempre é NULL;
  if (inicio == NULL) {
    inicio = aux; //se a lista já estiver vazia o inicio recebe o auxiliar e o nó já é inserido;
  }else
  {
    cont = inicio; //se não, variável cont recebe a lista original
    //enquanto o próximo nó não for nulo, corre a lista;
    while(cont -> prox !=NULL)  {
       cont = cont -> prox;
    }
  cont -> prox = aux; //o próximo recebe auxiliar;
  } 
  return inicio;
}

Tno *busca(Tno *inicio, int x) {
  Tno *aux;
  if (inicio == NULL)
  {
    printf("A lista está vazia, insira elementos antes de buscar\n");
  }else {
    aux = inicio;
    while (aux != NULL) {
      if (aux -> n == x) 
      {
        return aux;
      }
      else
      {
        aux = aux -> prox;
      }
    }
  }
  return NULL;
}

Tno *removeInicio(Tno *inicio) {
  Tno *aux;
  if (inicio == NULL) {
  printf ("Não existe elementos na lista.\n");
  }else
  {
    aux = inicio;
    inicio = inicio -> prox;
    free(aux);
    printf("Elemento removido com sucesso!\n");
  }
}

Tno *removeOpt(Tno *inicio, int x) {
  Tno *aux, *anterior;

  if (inicio == NULL)
  {
    printf("Não existem elementos na lista.\n");
  }
  else 
  {
    aux = inicio;
    anterior = inicio;
    while (aux != NULL)
    {
      if (aux -> n == x) 
      {
        if (aux == inicio)
        {
          inicio = inicio -> prox;
          free(aux);
        }
        else
        {
          anterior -> prox = aux -> prox;
          free(aux);
        }
      }
      else
      {
        anterior = aux;
        aux = aux -> prox;
      }
    }
    printf("Elemento não encontrado.\n");
  }
}

void menu (int opc){
  while (opc != 
}

int main (void) {
  setlocale(LC_ALL, "Portuguese");

  Tno *inicio = NULL; //definindo o ponteiro inicial apontando para NULL;
  
  inicio = inserir_inicio(inicio, 20); //chamando a função de inserir no inicio;
  inicio = insere_fim(inicio, 40);
  imprimir(inicio); //chamando a função de imprimir;
  
  return 0;
}
