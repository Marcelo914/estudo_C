#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x, cont, total;
  cont = 0;
  total = 0;
  char letra;

  while (letra = getchar()!= 'q') {
    printf("Digite um número:\n");
    scanf("%d", &x);


    fflush(stdin);

    cont++;
    total = total + x;
  
  }
  printf("Parando...\n");
  printf("Repetições = %d e total = %d \n", cont, total);
  return 0;
}
