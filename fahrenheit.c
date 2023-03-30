#include <stdio.h>
int main ()
{
  float graus, fahrenheit;
  printf("Digite a temperatura em C°\n");
  scanf("%f", &graus);
  fahrenheit = (graus * 1.8) + 32;
  printf("Está fazendo %f graus em fahrenheit\n", fahrenheit);
  return 0;
}
