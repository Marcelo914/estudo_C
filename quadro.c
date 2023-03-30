#include <stdio.h>
#include <string.h>

int main ()
{
  float faturas[5];
  char nomeclien[10][5];
  char cliente[20];

  float fatura;
  int espaco;

  printf("Digite o nome do seu cliente\n");
  scanf("%s", cliente);

  printf("Digite o valor de fatura de seu cliente\n");
  scanf("%f", &fatura);
  printf("%s\n", cliente);

  return 0;
}
