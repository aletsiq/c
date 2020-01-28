#include <stdio.h>
#include <locale.h>

 /*label em c
 *imprimir:
 *printf("O valor de i é: %u\n", i);
 *i++;
 *if (i < 3)
 *goto imprimir;
*/

/*for (unsigned i = 0 ;i < 3; i++) {
 * printf("O valor de i é: %u\n", i);
 * }
*/

/*do { 
 *printf("O valor de i é: %u\n", i++);
 * }
 *while (i < 3); 
*/

int main(void){
  setlocale(LC_ALL, "Portuguese"); 
  unsigned int i = 0; //unsigned porque não faz sentido um contador negativo

while (i < 3); 
 { 
   printf("O valor de i é: %u\n", i++);
  
   if (outra_coisa)
     continue;

   //codigo
 
   if (alguma_coisa)
     break;
 }
 
  return 0;
}
