#include <stdio.h>


int main()
{
  float dist, combust_t, consu_km;

  printf("CALCULADORA DE CONSUMO POR KM\n\n") ;
  printf("Distância total percorrida: \n");
  scanf("%f", &dist);
  printf("\n\nCombustivel total gasto: \n");
  scanf("%f", &combust_t);

  consu_km = dist/combust_t;
  printf ("O consumo de gasolina por km andando é: %.2f\n", consu_km);
  return 0;
}
