#include <stdio.h>
#include <stdlib.h>

int main()
{
  int atender, cont, escolha;
  printf("Ligação\n");
  scanf("%d", &atender);
  if (atender == 0){
    while (cont < 2) {
      printf("ligação\n");
      scanf("%d", &atender);
      cont ++;
    }
  }
  if (atender == 1) {
    printf("Convidar parar a refeição\n");
    printf("Digite 1 para aceitar e 0 para recusar\n");
    scanf("%d", &escolha);
  }
  if (escolha == 1) {
    
  }
  return 0;
}
