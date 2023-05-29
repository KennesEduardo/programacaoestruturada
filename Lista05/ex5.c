#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int i, v[4], n = 0, d = 0;
  srand(time(NULL));

  for (i = 0; i < 4; i++) {
    v[n] = i;
    v[n] = rand() % 2;
    printf("%d", v[n]);
  }

  return 0;
}
