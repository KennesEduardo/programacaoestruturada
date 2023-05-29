#include <stdio.h>

int Fatorial(int n) {
  int resultado = 1;

  for (int i = 1; i <= n; i++) {
    resultado *= i;
  }

  return resultado;
}

int main() {
  int n;
  printf("Digite um numero inteiro: ");
  scanf("%d", &n);

  int f = Fatorial(n);

  if (f != 1) {
    printf("O fatorial de %d é: %d\n", n, f);
  }

  return 0;
}