#include <stdio.h>
#include <stdlib.h>

void inicializa(int s[10]){
  int i, qnt;
  qnt = 1;
  for (i = 0; i < 10; i++) {
    s[i] = qnt;
    qnt ++;

  }
}

void mostra(int s[10]){
  int i;

  printf("O vetor ficou assim: \n");
  for (i = 0; i < 10; i++) {
    printf("| %d", s[i]);
  }
  printf("|");
  printf("\n\n");
}

  int main(){
  int v[10];
  inicializa(v);
  mostra(v);
  system("rm -r exe");
  return 0;
}
