#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int i, j;
  double matriz[6][6], sum = 0, media = 0;
  srand(time(NULL));
  for (i = 0; i < 6; i++) {
    for (j = 0; j < 6; j++) {
      matriz[i][j] = (double)rand() / RAND_MAX;
      printf("%.2f ", matriz[i][j]);
      sum += matriz[i][j];
      media = sum / 36;
    }
    printf("\n");
  }
  printf("A média encontrada é de: %.2f", media);
  return 0;
}