#include <stdio.h>

int main(void) {
  int ret = 0;

	ret = printf("papobinario.com.br\n");
  printf("%c", 10);
  printf("retorno da printf() anterior: %i\n", ret);
  printf ("Decimal %d - Octal:  %o - Hexadecimal: %x\n", 10, 10, 10);
	return 0;
}
