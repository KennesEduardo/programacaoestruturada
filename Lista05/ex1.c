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
  printf("Insira um n�mero: \n");
  scanf("%d", &n);

  for (i = 0; i < 8; i++) {
    if (n == v[i]) {
      printf("O n�mero que voc� digitou est� no vetor na posicao %d \n", i);
      break;
    }
  }

  if (n != v[i]) {
    printf("O n�mero que voc� digitou n�o esta no vetor");
  }
}
