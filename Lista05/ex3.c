#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int par, i, n = 0, n1 = 0, s = 0, vA[10], vB[10];

  for (i = 2; i < 21; i++) {
    par = i % 2;
    vA[n] = i;
    if (par % 2 == 0) {
      s = s + vA[n];
      printf("%d ", vA[n]);
      n++;
    }
  }

  printf("\n");

  for (i = 10; i < 20; i++) {
    vB[n1] = i;
    s = s + vB[n1];
    printf("%d ", vB[n1]);
    n1++;

  }

  printf("\n");

   printf("\nSoma dos dois vetores: %d", s);

  return 0;
}
