#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char nome[20];
  int tamanho;

  printf("Digite a string toda em minusculo: \n");
  scanf("%s", nome);
  
  tamanho = strlen(nome);

  printf("A string possui %d letras\n", tamanho);
  for (int i = 0; i < tamanho; i++) {
    printf("%c", toupper(nome[i]));
  }
  printf("\n");
  return 0;
}
