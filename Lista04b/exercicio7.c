#include <stdio.h>

int main(void) {
  int n, i, j, x = 1;
  printf("Insira o valor de n: ");
  scanf("%d", &n);
  for (i = n; i >= 1; i--) {
    for (j = 1; j <= i; j++) {
      printf("%d ", x);
      x++;
    }
    printf("\n");
  }
  return 0;
}
