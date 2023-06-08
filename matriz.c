#include <stdio.h>
#include <stdlib.h>

int main()
{
  int m,n, i, j;
  

  n = 3;
  m = 3;
  char mat[n][m];

  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      printf("Elemento [%d, %d]: \n", i, j);
      scanf("%s", &mat[i][j]);
    }
  }
  printf("matriz digitada: \n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
       printf("%s", mat[i][j]);
    }
    printf("\n");
  }
  system("rm -r exe");
  return 0;
}
