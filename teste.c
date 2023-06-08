#include <stdio.h>
int num1, num2, result, op;
int marcelo(int num1, int num2) {
  printf(" digite o primeiro numero:\n");
  scanf("%d", &num1);
  printf(" digite o segundo numero:\n");
  scanf("%d", &num2);
  return result;
}

int main(void) {

  scanf("%d", &op);

  switch (op) {
  case 1:
    marcelo(num1, num2);
    result = num1 + num2;
    printf("%d \n", result);
  case 2:
    result = num1 - num2;
    printf("%d\n", result);
  case 3:
    result = num1 *num2;
    printf("%d\n,", result);
  case 4:
    result = num1 / num2;
    printf("%d\n", result);
  }
}
