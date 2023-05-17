#include <stdio.h>
#include <stdlib.h>

int main()
{
int qnt, n;
float total;
total = 0;
printf("Digite os números para somar a media\n");
scanf("%d", &n);
do {
  if (n % 2 == 0) {
      total = total + n;
      qnt ++;
      scanf("%d", &n);
  }
  else {
  scanf("%d", &n);
  }
} while(n != 0);

  total = total/qnt;
  printf("%.2f\n", total);
  return 0;
}
