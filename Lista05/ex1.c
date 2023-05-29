#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int v[8], n, i;
  srand(time(NULL));

  for (i = 2; i < 21; i++) {
    v[i] = rand() % 100;
    printf("%d ", v[i]);
  }

  printf("\n");
  printf("Insira um número: \n");
  scanf("%d", &n);

  for (i = 0; i < 8; i++) {
    if (n == v[i]) {
      printf("O número que você digitou está no vetor na posicao %d \n", i);
      break;
    }
  }

  if (n != v[i]) {
    printf("O número que você digitou não esta no vetor");
  }
}
