#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int vA[20];
  srand(time(NULL));

  for (int i = 0; i < 20; i++) {
    vA[i] = rand() % 26 + 97;
    printf("%d ", vA[i]);
  }

  printf("\n");
  for (int i = 0; i < 20; i++) {
    printf("%c ", vA[i]);
  }

  return 0;
}
