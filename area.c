#include <stdio.h>
#include <stdlib.h>

int main ()
{
  printf("calculando a area do seu quarto\n");
  float length,width;
  int result;
  printf("Digite o comprimento do seu quarto: \n");
  scanf("%f", &length);
  printf("Digite a largura do seu quarto\n");
  scanf("%f", &width);
  result = (length * width);
  printf("O seu quarto possui %dM²\n", result);
  return 0;
}
