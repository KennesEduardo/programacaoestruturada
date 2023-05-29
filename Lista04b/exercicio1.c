#include <stdio.h>

int main(void) {
  int h, i, j;

  printf("Informe a altura do triângulo: ");
  scanf("%d", &h);

  for (i = 0; i < h; i++) {
    for (j = 0; j <= i; j++) {
      printf("*");
    }
      printf("\n");
  }


  return 0;
}
