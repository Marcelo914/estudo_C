#include <stdio.h>
#include <stdlib.h>

int main()
{
  int idade;
  printf("Digite a idade do jogadore: \n");
  scanf("%d", &idade);
  if (idade <= 13) {
    printf ("está na categoria infantil\n");
  }
  else {
    if (idade < 17) {
      printf ("está na categoria juvenil\n");
      }
    else {
      printf ("está na categoria sênior\n");
    }
    
  }
  return 0;
}
