#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int num[5], i;
  for (i = 0; i < 5; i++) {
    scanf("%d", &num[i + 1]);
  }
  system("clear");
  for (i = 5; i > 0 ; i--) {
    printf("%d\n", num[i]);
  }

  return 0;
}
