#include <stdio.h>
#include <stdlib.h>
int main ()
{
  const int VALOR = 5;
  int mult = 1;
  int result;
  while (mult < 11) {
    result = (VALOR*mult);
    printf("O resultado é %d.\n", result);
    mult += 1;
  }
  return 0;
}

