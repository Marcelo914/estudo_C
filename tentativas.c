#include <stdio.h>
#include <stdlib.h>

int main()
{
  char senha[10], repetsenha[10];
  int tentativas;
  printf("Digite a senha\n");
  scanf("%s", senha);
  do {
    printf("Digite novamente a mesma senha\n");
    scanf("%s", repetsenha);
    fflush(stdin);
    tentativas ++;

  } while(tentativas < 3);
  if (tentativas > 3) {
    printf("Você excedeu o limite de tentativas tente novamente mais tarde\n");
  }
  return 0;
}
