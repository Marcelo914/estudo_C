#include <stdlib.h>
#include <stdio.h>

int main() 
{
  int attemps, password, enterpswd;
  char username[20];
  printf("Digite o nome de usuário: \n");
  scanf("%s", username);
  system("clear");
  printf ("Digite a sua senha: \n");
  scanf("%d", &password);
  system ("clear");
  printf("entre com a sua senha para fazer login: \n");
  attemps = 3;
  while (attemps > 0 && enterpswd != password) {
    scanf("%d", &enterpswd);
    attemps --;
    printf("tente novamente\n");
  }
  if (enterpswd == password) {
    printf("Sucesso\n");
  }
  if (attemps <= 0) {
    printf("Limite de tentativas alcançado, tente novamente mais tarde.\n");
  }
  return 0;
}
