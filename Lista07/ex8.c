#include <stdio.h>

int fatorial(int n) {
  int fat = 1;
  for (int i = 2; i <= n; i++) {
    fat *= i;
  }
  return fat;
}

double euler(int n) {
  double e = 0.0;
  for (int i = 0; i <= n; i++) {
    e += 1.0 / fatorial(i);
  }
  return e;
}

int main() {
  printf("n\tEuler\n");
  for (int n = 0; n <= 20; n++) {
    printf("%d\t%.16f\n", n, euler(n));
  }
  return 0;
}