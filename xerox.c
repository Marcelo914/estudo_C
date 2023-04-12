#include <stdio.h>
#include <stdlib.h>

int main()
{
  float preco, total;
  int qnt;
  printf("digite a quantidade de folhas que deseja copiar\n");
  scanf("%d", &qnt);
  if (qnt > 99) {
    preco = 0.20;
    total = qnt * preco;
    printf ("%.2f\n", total);

  }
  else {
    preco = 0.25;
    total = qnt * preco;
    printf ("%.2f\n", total);
  }


  return 0;
}
