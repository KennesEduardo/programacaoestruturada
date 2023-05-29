#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int i, j, somaPositivo = 0, somaNegativo = 0;
  int matriz[5][5];
  srand(time(NULL));
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      matriz[i][j] = rand() % 21 - 10;
      if (matriz[i][j] >= 0) {
        somaPositivo += matriz[i][j];
      } else {
        somaNegativo += matriz[i][j];
      }
      printf("%3d ", matriz[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  printf("Soma dos números positivos da matrix: %d\n", somaPositivo);
  printf("Soma dos números negativos da matrix: %d\n", somaNegativo);
  return 0;
}