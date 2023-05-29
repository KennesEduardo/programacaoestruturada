#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int matriz[10][10];
  int i, j;
  srand(time(NULL));

  for (i = 0; i < 9; i++) {
    for (j = 0; j < 9; j++) {
      matriz[i][j] = rand() % 10;
    }
  }

  for (j = 0; j < 9; j++) {
    int soma = 0;
    for (i = 0; i < 9; i++) {
      soma += matriz[i][j];
    }
    matriz[9][j] = soma;
  }

  for (i = 0; i < 9; i++) {
    int soma = 0;
    for (j = 0; j < 9; j++) {
      soma += matriz[i][j];
    }
    matriz[i][9] = soma;
  }

  int soma_total = 0;
  for (i = 0; i < 9; i++) {
    for (j = 0; j < 9; j++) {
      soma_total += matriz[i][j];
    }
  }
  matriz[9][9] = soma_total;

  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      printf("%2d ", matriz[i][j]);
    }
    printf("\n");
  }

  return 0;
}