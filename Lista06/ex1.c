#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  int i, j;
  int matriz[10][10];

  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      matriz[i][j] = rand() % (99 - 11) + 10;
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  return 0;
}