#include <stdio.h>


int main()
{
  float semestre1, semestre2, semestre3,media;
  char aluno[20];
  printf("Digite o nome do aluno: ");
  scanf("%s", aluno);
  printf("digite a nota dos 3 semestres\n");
  scanf("%f%f%f", &semestre1, &semestre2, &semestre3);
  
  media = (semestre1 + semestre2 + semestre3)/3;
  printf("A média do aluno %s nos três semestres foi %.2f\n", aluno, media);


 return 0;
}
