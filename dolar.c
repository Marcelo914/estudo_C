#include <stdio.h>
int main ()
{
  float real;
  printf("Digite o valor em reais: \n");
  scanf("%f", &real);
  printf("Isso equivale a %f dolares\n", real / 5.20);
  return 0;
}
