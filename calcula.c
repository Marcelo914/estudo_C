#include <stdio.h>
#include <stdlib.h>
int num1, num2, resultado, op;
int subtracao(int num1, int num2){
  printf("Digite o primeiro número: \n");
  scanf("%d", &num1);
  printf("Digite o segundo número: \n");
  scanf("%d", &num2);
  resultado = num1 - num2;
  return resultado;
}

int divi(int num1, int num2){
  printf("Digite o primeiro número: \n");
  scanf("%d", &num1);
  printf("Digite o segundo número: \n");
  scanf("%d", &num2);
  resultado = num1 / num2;
  return resultado;
}

int mult(int num1, int num2){
  printf("Digite o prmeiro número: \n");
  scanf("%d", &num1);
  printf("Digite o segundo número: \n");
  scanf("%d", &num2);
  resultado = num1 * num2;
  return resultado;
}
int soma(int num1, int num2){
  printf("Digite o primeiro número: \n");
  scanf("%d", &num1);
  printf("Digite o segundo número: \n");
  scanf("%d", &num2);
  resultado = num1 + num2;
  return resultado;
}
int main(void)
{

  scanf("%d", &op);
  switch (op) {
    case 1:
    soma(num1, num2);
    printf("%d\n", resultado);
    break;
    case 2:
    mult(num1,num2);
    printf("%d\n", resultado);
    break;
    case 3:
    divi(num1, num2);
    printf("%d\n", resultado);
    break;
    case 4:
    subtracao(num1, num2);
    printf("%d\n", resultado);
    break;
  }
  
  return 0;
}
