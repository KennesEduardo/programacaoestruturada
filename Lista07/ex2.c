#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int i;
  int face;
  int freq[7] = {0};

  srand(time(NULL));

  for (i = 0; i < 1000; i++) {
    face = rand() % 6 + 1;
    freq[face]++;
  }

  printf("Face\t Frequência\n");

  for (i = 1; i <= 6; i++) {
    printf("%d\t\t\t%d%%\n", i, freq[i] / 10);
  }

  return 0;
}