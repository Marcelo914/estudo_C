#include <stdio.h>
#include <stdlib.h>

int main()
{
  int cont;
  cont = 0;

  char letra;
  letra = getchar();
  while (letra=getchar()!= 'q') {
    printf("oi\n");
    fflush(stdin);
    cont++;
  }
  printf("parando...\n");
  printf("repetições = %d\n", cont);
  return 0;
}
