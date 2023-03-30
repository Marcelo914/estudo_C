//tabuada em C
#include <stdio.h>
#include <stdlib.h>
int main ()
{
  int valor;
  scanf("%d", &valor);
  int mult = 1;
  int result;
  while (mult < 11) {
    result = (valor*mult);
    printf("O resultado é %d.\n", result);
    mult += 1;
  }
  return 0;
}

