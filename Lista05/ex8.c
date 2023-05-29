#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int i, v[5], c[5], d = 0, n = 0;
  srand(time(NULL));

  printf("Vetor de números: ");
  for (i = 0; i < 5; i++) {
    v[i] = i;
    v[i] = rand() % 20;
    printf("%d ", v[i]);
  }

  printf("\n");

  printf("Vetor do cubo dos números: ");
  for (i = 0; i < 5; i++) {
    c[i] = pow(v[i], 3);
    printf("%d ", c[i]);
  }

  return 0;
}
