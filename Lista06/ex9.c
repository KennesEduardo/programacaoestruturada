#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int i, j;
  double matriz[6][6];
  srand(time(NULL));
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            matriz[i][j] = ((double)rand() / RAND_MAX) * 2 - 1; 
            printf("%.2f ", matriz[i][j]);
        }
      printf("\n");
    }

  printf("\n");
     for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            matriz[i][j] *= 2;
            printf("%.2f ", matriz[i][j]);
        }
      printf("\n");
    }

    printf("\n");
     for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            matriz[i][j] -= 1;
            printf("%.2f ", matriz[i][j]);
        }
      printf("\n");
    }
  return 0;
}