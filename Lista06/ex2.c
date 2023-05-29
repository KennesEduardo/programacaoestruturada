#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  int i, j;
  int matriz[6][6];

   for (i = 0; i < 6; i++) {
    for (j = 0; j < 6; j++) {
      matriz[i][j] = 0;
      printf("%d ", matriz[i][j]);  
    }
    printf("\n");
  }
  printf("\n");
  
  for (i = 0; i < 6; i++) {
    for (j = 0; j < 6; j++) {
      matriz[i][j] = 0;
      matriz[i][i] = 1;
      printf("%d ", matriz[i][j]);  
    }
    printf("\n");
  }
  return 0;
}