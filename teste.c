#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a;

  do {
    printf("Digite o valor:\n");
    scanf("%d", &a);
  } while(a == 0);
  return 0;
}
