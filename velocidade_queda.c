#include <stdio.h>
#include <stdlib.h>

int main()
{
  int vel_inic, aceleracao;
  float tempo, vel_total;


  printf("Digite o tempo de quebra em segundos\n");
  scanf("%f", &tempo);

  aceleracao = 98;

  if (tempo <= 0) {
    printf("O tempo tem que ser maior que zero.\n");
  }
  else{
    vel_total =  vel_inic + (aceleracao *tempo)/10;
    printf("A velocidade da queda é de %.3f m/s\n", vel_total);
  }
  return 0;
}
