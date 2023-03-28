#include <stdio.h>
int main ()
{
  int meters;
  printf("Digite a qunatidade de metros a serem convertidos: \n");
  scanf("%d", &meters);
  printf("A conversão de metros para milimetros resultou em: %d milimetros\n", meters * 1000);
  return 0;
}
