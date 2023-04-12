#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num1, num2;
  printf("Par ou impar?\n");
  printf("Digite o primeiro número: \n");
  scanf("%d", &num1);
  if (num1 % 2 == 0) {
    printf("O número é par.\n");
  }
  else {
    printf("O número é impar. \n");
  }

  return 0;
}
