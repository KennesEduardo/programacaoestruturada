#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void decompor() {
  int n;
  srand(time(NULL));
  n = rand() % 9000 + 1000;
  printf("Numero: %d\n", n);
  printf("Unidade: %d\n", n % 10);
  printf("Dezena: %d\n", (n / 10) % 10 * 10);
  printf("Centena: %d\n", (n / 100) % 10 * 100);
  printf("Milhar: %d\n", (n / 1000) * 1000);
}

int main() {
  decompor();
  return 0;
}