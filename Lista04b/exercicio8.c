#include <stdio.h>

int main(void) {
  int n, i, j;

  printf("Informe a altura do triângulo: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    for (j = n - 1; j >= i; j--) {
      printf(" ");
    }
    for (j = 1; j <= i; j++) {
      printf("*");
    }
    printf(" ");

    for (j = 1; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
