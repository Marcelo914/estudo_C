#include <stdio.h>

int main(void)
{
  int n, i;

  printf("Quantos números você vai digitar? \n");
  scanf("%d", &n);

  double vet[n];

  for (i = 0; i < n; i++) {
    printf("Digite um número: \n");
    scanf("%lf", &vet[i]);
  }

  printf("\nNumeros Digitados: \n");
  for (i = 0; i < n; i++) {
    printf("%.2lf\n", vet[i]);
  }
  return 0;
}
