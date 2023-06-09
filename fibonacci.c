#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int c, num1, num2, n;
  num1 = 0;
  num2 = 1;
  scanf("%d", &n);

  for (int i = n; i > 0; i--) {
    printf("%d\n", num1);
    printf("%d\n", num2);
    c = num1 + num2;
    num1 = c;
    num2 = num1 + num2;
  }
  return 0;
}
