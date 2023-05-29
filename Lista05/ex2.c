#include <stdio.h>

int main(void) {
  int i, par, v[10], n = 0;

  for (i = 2; i < 21; i++) {
    par = i % 2;
    v[n] = i;
    if (par % 2 == 0) {
      printf("%d ", v[n]);
    }
  }

  return 0;
}
