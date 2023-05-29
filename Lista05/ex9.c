#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i, par, v[10], n = 0;

  printf("Vetor de Números: ");
  for (i = 10; i < 21; i++) {
    v[n] = i;
    printf("%d ", v[n]);
  }

  printf("\nNúmeros pares de trás pra frente: ");
  for (i = 21; i >= 10; i--) {
    par = i % 2;
    v[n] = i;
    if (par % 2 == 0) {
      printf("%d ", v[n]);
    }
  }

  printf("\nNúmeros ímpares: ");
  for (i = 10; i < 21; i++) {
    par = i % 2;
    v[n] = i;
    if (par % 2 == 1) {
      printf("%d ", v[n]);
    }
  }
  return 0;
}
