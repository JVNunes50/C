#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000
#define MIN 10
#define MAX 9999
#define DELTA (MAX - MIN + 1) + MIN

int main(void) {
  int array[SIZE], i;
  int XX = 0, XXX = 0, XXXX = 0;
  
  srand(time(NULL));
  
  for(i = 0; i < SIZE; i++){
    array[i] = rand() % DELTA;
    
    if(array[i] <= 99) XX++;
      
    else if (array[i] <= 999) XXX++;
      
    else XXXX++;
  }
  printf("Quantidades de números / dígitos: \n");
  printf("2D (XX): %i (%.2f %%)\n", XX, 100.0 * XX / SIZE);
  printf("3D (XXX): %i (%.2f %%)\n", XXX, 100.0 * XXX / SIZE);
  printf("4D (XXXX): %i (%.2f %%)\n", XXXX, 100.0 * XXXX / SIZE);
  return 0;
}
