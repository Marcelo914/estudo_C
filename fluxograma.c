#include <stdio.h>
#include <stdlib.h>

int main()
{ 
  char interesses[10];
  int atender, convite, bebida, tipo_bebida, n, result;
  atender = 0;
  n = 3;
  while (atender != 1) {
    printf("ligação\n");
    printf("Deseja atender a ligação\n");
    printf("1 = sim / 0 = não\n");
    scanf("%d", &atender);
    system("clear || cls");
  }

  if (atender == 1) {
    printf("Convite para refeição\n");
    printf("aceitar convite?\n");
    scanf("%d", &convite);
  }
  if (convite == 0) {
    printf("oferecer bebida\n");
    scanf("%d", &bebida);
  }
  else {
    printf("começar amizade\n");
  }
  if (bebida == 1) {
    printf("café chá ou chocolate?\n");
    scanf("%d", &tipo_bebida);
    switch (tipo_bebida) {
      case 1:
      printf("café");
      case 2:
      printf("chá");
      case 3:
      printf("chocolate");
    }
  }
  else {
    do {
      printf("quais seus interesses\n");
      scanf("%s", interesses);
      printf("gostou\n");
      scanf("%d", &result);
    } while(n <= 0 || result == 0);
  }
  if (result == 1) {
    printf("aee amizade\n");
  }
  return 0;
}
