#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int v[15], j, k, i, teste = 0;
  srand(time(NULL));

  for (i = 0; i < 15; i++) {
    k = rand() % 25 + 1;
    teste = 0;
    for (j = 0; j <= i; j++) {
      if (v[j] == k) {
        teste = 1;
      }
    }
    if (teste == 0) {
      v[i] = k;
      printf("%d ", v[i]);
    } else {
      i--;
    }
  }
  printf("\n");

  return 0;
}
