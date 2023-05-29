#include <stdio.h>

int main(void) {
  int h, i, j;

  printf("Informe a altura do triângulo: ");
  scanf("%d", &h);

  for (i = 1; i <= h; i++) {
    for (j = 1; j <= i; j++) {
      printf("%d", i);
    }
    printf("\n");
  }

  return 0;
}
