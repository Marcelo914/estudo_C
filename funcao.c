#include <stdio.h>
#include <stdlib.h>

int valor(int *a, int *b){
  *a = *a + 1;
  *b = *b + 2;
  printf("Valorese das variaveis dento da funcao\n");
  printf("valor 1 = %d\n", *a);
  printf("Valo 2 = %d\n", *b);
}

int main(){
  int n1 = 1, n2 = 1, total;
  printf("Valres iniciais de n1 e n2: %d e %d\n", n1, n2); 
  printf("Chamando a função... \n");

  valor(&n1, &n2);
  printf("Valores depis de chamada da funcao: %d e %d\n", n1, n2);
}
