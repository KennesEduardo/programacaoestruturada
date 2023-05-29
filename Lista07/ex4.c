#include <stdio.h>

//exercicio com erro.
int main() {
  int n;

  printf("Digite um numero inteiro: ");
  scanf("%d", &n);

  imprimirNum(n);

  return 0;
}

void imprimirNum(int n) {

  int i;

  for (i = 0; i < 5; i++) {
    if (i % 2 != 0) {
      printf("%d ", i);
    }
  }

  for (i = 0; i < 5; i++) {
    if (i % 2 == 0) {
      printf("%d ", i);
    }
  }
}