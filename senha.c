#include <stdio.h>
#include <stdlib.h>

int main()
{
  int senha,loginsenha;
  printf("defina a sua senha\n");
  scanf("%d", &senha);
  system("clear");
  printf("faça login com sua senha\n");
  scanf("%d", &loginsenha);
  if (loginsenha == senha) {
    printf("Deu tudo certo\n");
  }
  else {
    printf("deu tudo errado\n");
  }
  return 0;
}
