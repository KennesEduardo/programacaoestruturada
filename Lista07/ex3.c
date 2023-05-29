#include <stdio.h>

void imprimirNum(int n) {
  int i;

  for (i = 0; i <= n; i++) {
    printf("%d ", i);
  }
}

int main() {
  int num;

  printf("Digite um número inteiro: ");
  scanf("%d", &num);
  imprimirNum(num);

  return 0;
}