#include <stdio.h>
#include <stdlib.h>

int main ()
{
  float raio;
  float circuferencia;
  printf("Bem vindo. Digite o raio da circuferencia para seu comprimento seja calculado: \n");
  scanf("%f", &raio);
  circuferencia = (3.14159265 * 2) * raio;
  printf("%f\n", circuferencia);


  return 0;
}
