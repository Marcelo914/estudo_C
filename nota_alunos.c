#include <stdio.h>
#include <stdlib.h>
int main()
{
  char materia[20], aluno[25], professor[25];
  float nota1, nota2, nota3, nota4, media;
  int oqfazer;
  printf ("informações do professor: \n\n");
  printf ("Digite o nome do professor: \n");
  scanf ("%s", professor);
  printf ("Informações do aluno: \n\n");
  printf ("Qual matéria o aluno está matriculado? \n");
  scanf ("%s", materia);
  printf ("Qual o nome do aluno? \n");
  scanf ("%s", aluno);
  printf ("Bem-vindo %s\n\n", aluno);
  
  printf("Por favor digite as suas notas em %s\n", materia);
  printf("1° bimestre: \n");
  scanf("%f", &nota1);
  printf("2° bimestre: \n");
  scanf("%f", &nota2);
  printf("3° bimestre: \n");
  scanf("%f", &nota3);
  printf("4° bimestre: \n");
  scanf("%f", &nota4);

  system("clear");

  media = (nota1 + nota2 + nota3 + nota4)/4;

  printf("media do aluno %s em %s foi %.2f\n",aluno, materia, media);
  if (media >= 6) {
    printf ("Parabens %s você está aprovado!\n", aluno);
  }
  else if (media >= 4){
    printf("Não foi alcançado media suficiente, por isso, ficará de recuperação.\n");
    
  }
  else {
    printf("Parece que estaremos juntos por mais um ano :D\n");
    printf("O que vai fazer agora?\n");
    printf("você pode: chorar(1) ou jogar novamente(2)\n");
    scanf("%d", &oqfazer);

    if (oqfazer == 1) {
    printf("Dizem que ele está chorando até hoje...\n");
    }
    else if (oqfazer == 2 ) {
      printf("O importante é nunca desistir!\n");
    }
    else {
      printf("é 1 ou 2 oh panguão\n");
    }
  }

  return 0;
}
