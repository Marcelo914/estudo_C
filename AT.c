#include <stdio.h>

int main()
{
  int qnt, loop, menor, maior, at;
  printf("Digite quantos número serão usados para calcular a AT\n");
  scanf("%d", &qnt);

  int num[qnt];

  printf("Digite todos os %d valores: \n", qnt);

  loop = 0;
  for (loop = 0; loop < qnt; loop ++) {
    scanf("%d", &num[loop]);
  }

  menor = num[0];
  maior = num[0];


  loop = 0;
  for (loop = 0; loop < qnt ; loop++) {
    if (num[loop] < menor){
      menor = num[loop];
    }
    else {
      maior = num[loop];
    }
  }
  at = maior - menor;

  printf("O menor valor é %d e o maior é %d\n", menor, maior);
  printf("A amplitude total desses números é: %d\n", at);


  return 0;
}
