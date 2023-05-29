#include <stdio.h>

void fibonacci(int n) {
  int a = 1, b = 1, c;
  printf("Sequência de Fibonacci até %d:\n", n);
  for (int i = 1; i <= n; i++) {
    printf("%d ", a);
    c = a + b;
    a = b;
    b = c;
  }
  printf("\n");
}

int main() {
  int n;
  printf("Digite o valor: ");
  scanf("%d", &n);
  fibonacci(n);
  return 0;
}