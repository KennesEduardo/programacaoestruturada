#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
   int i, j;
   int matrix[5][5];
    srand(time(NULL));
    for (i = 0; i < 5; i++) {
        for ( j = 0; j < 5; j++) {
            matrix[i][j] = rand() % 21 - 10;
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
  return 0;
}