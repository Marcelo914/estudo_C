#include <stdio.h>

int main()
{
  float raio, area;
  printf("Digite o diametro do raio\n");
  scanf("%f", &raio);
  if (raio <= 0) {
    printf("o raio precisa ser maior que 0\n");
  }
  else {
  area = 3.14*(raio * raio);
  printf("A area da circuferencia é %.2f\n", area);
  }
  return 0;

}
