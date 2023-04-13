#include <stdio.h>

int main()
{
  int num;
  printf("é maior que 10? \n");
  printf ("Entre com algum número: \n");
  scanf("%d", &num);
  if (num > 10) {
    printf("é maior que 10\n");
  }
  else {
    printf ("não é maior que 10\n ");
  }
  return 0;
}
