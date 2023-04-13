#include <stdio.h>

int main()
{
  int num;
  printf("entre 100 e 200\n");
  scanf("%d", &num);

  if (num < 100) {
    printf("menor que 100\n");
  }
  else if (num > 200) {
    printf ("maior que 200\n");
  }
  else {
    printf("está entre 100 e 200\n");
  }
  return 0;
}
