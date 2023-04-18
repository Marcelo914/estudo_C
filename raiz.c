#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  double delta, sqrtdelta, raiz1, raiz2;
  float a, b, c;
  
  printf("Digite o valor de a\n");
  scanf("%f", &a);
  printf("Digite o valor de b\n");
  scanf("%f", &b);
  printf("Digite o valor de c\n");
  scanf("%f", &c);

  if (a == 0) {
    printf("O valor de a não pode ser igual a 0\n");
    return 0;
  }
  else {
  delta = pow(b, 2) - (4*a)*c;
  sqrtdelta = sqrt(delta);
    if (delta >= 0) {
      raiz1 =(-b + sqrtdelta)/2*a;
      raiz2 =(-b - sqrtdelta)/2*a;

      printf("As raizes da equação são: x1=%.3f e x2=%.3f\n", raiz1, raiz2);

    }
    else{
      printf("Não foi possivel encontar a raiz de número negativo\n");
    }

  }
  return 0;
}
