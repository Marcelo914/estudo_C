#include <stdio.h>
#include <stdlib.h>

int main()
{
  float total, valor;
  int i, loop;
  printf("Bem vindo!\n\n");
  printf("Digite a quantidade de valores que deseja pegar a média: \n");
  scanf("%d", &loop);
  system ("clear");

  for (i = 0; i < loop; i++) {
    printf("valor %d:\n", i + 1);
    scanf("%f", &valor);
    total += valor;
  }
  total /= loop;
  printf("%.2f\n", total);
  return 0;
}
