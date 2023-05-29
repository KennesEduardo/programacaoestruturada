#include <stdio.h>

int main(void) {
  int n, i, j, k, x = 1;
  printf("Insira o valor de n: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    for (k = (n - i); k > 0; k--) {
      printf(" ");
    }
    for (j = 1; j <= i; j++) {
      printf("* ");
      x++;
    }
    printf("\n");
  }
  return 0;
}
