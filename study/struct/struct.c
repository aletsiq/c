#include <stdio.h>
#include <locale.h>

//typedef renomeia o tipo
typedef struct ficha //struct = tipo que armazena variáveis
{
   char nome[40];
   int idade;
   float salario;
}Tficha; //renomeando para Tficha

int main() {
  setlocale(LC_ALL, "Portuguese");

  Tficha aluno;

  printf("Digite seu nome:\n");
  scanf("%c", &aluno.nome);
  fflush(stdin);

  printf("Digite sua idade:\n");
  scanf("%d", &aluno.idade);

  printf("Digite seu sálario:\n");
  scanf("%f", &aluno.salario);

  printf("Nome: %s\n", aluno.nome);
  printf("Idade: %d\n", aluno.idade);
  printf("Salário: R$ %.2f\n", aluno.salario);
}
 
