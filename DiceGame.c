#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  int i,total=0;
  int die[2];
  char name[50];

  srand((unsigned int)time(NULL));

  printf("rolling the dice...\n");
  for(i=0;i<2;i++){
    die[i] = rand()%6+1;
    total = total + die[i];
    printf("Die %d: %d\n",i+1,die[i]);
  }
  printf("Total value: %d\n",total);

  return 0;
}