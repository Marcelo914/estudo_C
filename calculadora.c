#include <stdio.h>
#include <stdlib.h>
int main()
{
  int number_1, number_2;
  printf("Digite dois numeros: \n");
  scanf("%d%d", &number_1, &number_2);
  printf("A multiplicação desses dois numeros é: %d\n", number_1 * number_2);
  printf("A soma desses desses dois números é: %d\n", number_1 + number_2);
  printf("A subtração desses dois números é: %d\n", number_1 - number_2);
  printf("A divisão desses dois números é: %d\n", number_1 / number_2);


  return 0;
}
