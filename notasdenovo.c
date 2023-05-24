#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i, n;
  printf("Digite a quantidade de notas\n");
  scanf("%d", &n);
  system("clear");
  float notas[n], media;
  for (i = 0; i < n ; i++) {
    printf("Nota %d\n", i + 1);
    scanf("%f", &notas[i]);
  }
  system("clear");
  for (i = 0; i < n; i++) {
    printf("nota %d = %.2f\n", i + 1, notas[i]);
    media = media + notas[i];
  }
  media = media/n;
  printf("%.2f\n", media);

  return 0;
}
