#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void intervalo() {
  int n1, n2;
  srand(time(NULL));
  n1 = rand() % 50;
  n2 = rand() % 50;
  if (n1 > n2) {
    int t = n1;
    n1 = n2;
    n2 = t;
  }
  
  printf("N1 = %d\n", n1);
  printf("N2 = %d\n", n2);

  for (int i = n1 + 1; i < n2; i++) {
    printf("%d ", i);
  }
  printf("\n");
}

int main() {
  intervalo();
  return 0;
}