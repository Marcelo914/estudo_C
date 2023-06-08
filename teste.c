#include <stdio.h>
int num1, num2, result, op;
int marcelo(int num1, int num2) {
  printf(" digite o primeiro numero:\n");
  scanf("%d", &num1);
  printf(" digite o segundo numero:\n");
  scanf("%d", &num2);
  result = num1 + num2;
  return result;
}

int main(void) {
  printf("Escolha a operação\n");
  scanf("%d", &op);

  switch (op) {
  case 1:
    marcelo(num1, num2);
    result = num1 + num2;
    printf("%d\n", result);
  break;
  case 2:
    marcelo(num1,num2);
    result = num1 - num2;
    printf("%d\n", result);
  break;
  case 3:
    marcelo(num1,num2);
    result = num1 *num2;
    printf("%d\n,", result);
  break;
  case 4:
    marcelo(num1,num2);
    result = num1 / num2;
    printf("%d\n", result);
  break;
  }
}
