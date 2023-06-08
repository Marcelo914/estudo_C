#include <stdio.h>
#include <stdlib.h>
#include <sys/select.h>

int main()
{
  int a,a2, b, c, inter;
  printf("Digite o valor de A, B e C, onde A deve ser maior que 1\n");
  scanf("%d", &a);
  if (a <= 1) {
    return 0;
  }
  else {
    scanf("%d", &b);
    scanf("%d", &c);
    }
  if (b > c) {
    do {
      if (b % a == 0) {
        b++;
        inter = inter + b;
      }
    } while(b >= c);
  }
  else if (b == c) {
    printf("da n\n");
    return 0;
  }
  else {
    do {
      if (c % a == 0) {
        c++;
        inter = inter + b;
    }
    }while(c > b);
    }
  system("rm -r exe");
  
  return 0;
}
