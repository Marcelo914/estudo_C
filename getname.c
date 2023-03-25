#include <stdio.h>
#include <stdlib.h>

int main ()
{
  printf("Digite o seu nome\n");
  char name [20];
  scanf("%s", name);
  printf("Seja bem-vindo(a)! %s.\n", name);
  return 0;
}
