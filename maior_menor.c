#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num1, num2;
  printf("Digite o primeiro número \n");
  scanf("%d", &num1);
  printf("Digite o segundo número \n");
  scanf("%d", &num2);
  if (num1 > num2) {
    printf("o %d é maior que %d\n", num1, num2);
  }
  else if (num1 == num2) {
    printf ("Ambos são do mesmo tamanho\n");
  
  }
  else {
    printf("o %d é maior que %d\n", num2, num1);
  }
  return 0;
}
