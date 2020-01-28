#include <stdio.h>
#include <locale.h>

/*& and, e - bit a bit
 *| or, ou - bit a bit
 *^ xor, ou exclusivo;
 *~ negação - bit a bit 
 * << - empurra bit pra esquerda dependendo da base
 * >> - usar unsigned empurra bit pra direita dependendo da base
 * usar para operações que precisem dividir ou multiplicar por 2 com binário.
*/

int main(void){
  setlocale(LC_ALL, "Portuguese"); 
 
 // int a = 0b10000000000000000000000000000000;
 //signed int b = 0b01111111111111111111111111111111; negação de a

  //int a = 0b1000; // 10000

  //criptografia simples

  int a = 359;
  int chave = 3;
  
  // 0 é falso
  // qualquer coisa diferente é verdadeiro

  printf("%d\n", a^chave);

  return 0;
}
