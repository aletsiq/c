#include <stdio.h>
#include <locale.h>

void imprime(char *s){
  while (*s != '\0')
  {
    putchar(*s++);
  }
}

int main(void){
  setlocale(LC_ALL, "Portuguese"); 
  
//char u[] = { 0x41, 0x6c, 0x65, 0x78, 0x61, 0x6e, 0x64, 0x72, 0x65,'\n', 0x00 };
  char u[] = "Alexandre\n";
//  char *s = "uma frase muito grande\n";
  imprime(u);

  return 0;
}
