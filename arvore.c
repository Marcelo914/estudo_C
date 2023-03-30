#include <stdio.h>
int main ()
{
  int vazio, altura, asteriscos, i, j, k;
  printf("Digite a altura da arvore de natal: \n");
  scanf("%d", &altura);
  for(i = 0; i < altura; i++) {
    vazio = altura - i -1;
    asteriscos = 2 * i + 1;

    for (j = 0; j < vazio; j++){
      printf(" ");
    }
    for(k = 0; k < asteriscos; k++){
      printf("*");
    }
    printf("\n");
  }
  for(i = 0; i< altura - 1; i++){
    printf(" ");
  }
  printf("*\n");
  for(i = 0; i < altura - 2; i++){
    printf(" ");
  }
  
  
  return 0;
}
