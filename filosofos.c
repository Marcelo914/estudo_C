/****************************BLOCO 01******************************************/
#include<stdio.h>
#include<stdlib.h>
#include<semaphore.h>
#include<pthread.h>

#define N 5 
#define COMENDO 2
#define FOME 1
#define PENSANDO 0
#define ESQUERDA (filosofoID + 4) % N 
#define DIREITA (filosofoID + 1) % N  

sem_t semaforo1; 
sem_t semaforo2[N]; 
int estado[N]; 
int filosofoID[N] = {0,1,2,3,4}; 

void *filosofo(void *num); 
void pegaGarfo(int);  
void devolveGarfo(int);  
void verificacao(int);  
/****************************FINAL BLOCO 01************************************/

/****************************BLOCO 02************************************/
int main() { 
  int i;
  pthread_t thread_id[N]; 

  sem_init(&semaforo1, 0, 1);
  for (i=0; i<N; i++)
    sem_init(&semaforo2[i], 0, 0);
  for (i=0; i<N; i++) {
    pthread_create(&thread_id[i], NULL, filosofo, &filosofoID[i]);
    printf("O %dº Filósofo esta pensando...\n", i + 1);
  } 
  for (i=0; i<N; i++)
    pthread_join(thread_id[i], NULL);
  return 0;
}


void *filosofo(void *num) { 
  while(1) {  
    int *i = num; 
    sleep(1); 
    pegaGarfo(*i);
    sleep(1);  
    devolveGarfo(*i);
  }
}
/****************************FINAL BLOCO 02************************************/

/****************************BLOCO 03******************************************/


void devolveGarfo(int filosofoID) {
  sem_wait(&semaforo1);
  estado[filosofoID] = PENSANDO;
  printf("O %dº Filósofo comeu e devolveu os garfos que usou para comer...\n", filosofoID + 1);
  printf("O %dº Filósofo está pensando...\n", filosofoID + 1);
  verificacao(ESQUERDA);
  verificacao(DIREITA);
  sem_post(&semaforo1);
}

void pegaGarfo(int filosofoID) {
  sem_wait(&semaforo1);
  estado[filosofoID] = FOME;
  printf("O %dº Filósofo está com fome...\n", filosofoID + 1);
  verificacao(filosofoID);
  sem_post(&semaforo1);
  sem_wait(&semaforo2[filosofoID]);
  sleep(1); 
}



void verificacao(int filosofoID) { 
  if (estado[filosofoID] == FOME    
    && estado[ESQUERDA] != COMENDO 
    && estado[DIREITA] != COMENDO)  
  { 
    estado[filosofoID] = COMENDO;
    sleep(2); 
    printf("O %dº Filósofo pegou os garfos %d e %d \n", filosofoID + 1, ESQUERDA + 1, filosofoID + 1);
    printf("O %dº Filósofo estava com fome e agora está comendo...\n", filosofoID + 1); 
    sem_post(&semaforo2[filosofoID]); 
  }
}
/****************************FINAL BLOCO 03************************************/

