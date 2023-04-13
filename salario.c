#include <stdio.h>


int main()
{
  float salario, aumento;
  char funcionario[20];

  printf("Digite o nome do funcionário:\n");
  scanf("%s", funcionario);
  printf("Digite o seu salário:\n");
  scanf("%f", &salario);

  if (salario < 999.99) {
    aumento = (salario/100) * 10;
    salario += aumento;
    printf("%s recebeu um aumento de 10%% e passou a ser %.2f\n", funcionario, salario);
  }
  else {
    printf("%s não recebeu o aumento\n", funcionario);
  }
  return 0;
}
