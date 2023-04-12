#include <stdio.h>
#include <stdlib.h>

int main()
{
  char aluno[20];
  int bimestre;
  bimestre = 0;
  float nota1,nota2, nota3, nota4, final;
  printf("Sistema de notas\n\n");
  scanf("%s", aluno);
  system ("clear");
  printf("Sistema de notas do aluno %s\n", aluno);

  printf ("Você deseja editar a nota de qual bimestre?\n");
  switch (bimestre) {
    case 1:
    scanf("%f", &nota1);
    case 2:
    scanf("%f", &nota2);
    case 3:
    scanf("%f", &nota3);
    case 4:
    scanf("k");
  }
  return 0;
}
