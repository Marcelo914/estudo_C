#include <stdio.h>

int main()
{
  char materia[20], aluno[25], professor[25];
  printf ("informações do professor: ");
  printf ("Digite o nome do professor: ");
  scanf ("%s", professor);
  printf ("Informações do aluno: \n");
  printf ("Qual matéria o aluno está matriculado? \n");
  scanf ("%s", materia);
  printf ("Qual o nome do aluno? \n");
  scanf ("%s", aluno);
  printf ("Bem-vindo %s\n\n", aluno);

  printf ("Digite o nome do professor");

  return 0;
}
