#include <math.h>
#include <stdio.h>

double n(int x, int y) { 
  return sqrt(x * x + y * y); 
}

int main() {
  int x, y;
  printf("Digite o valor de x: ");
  scanf("%d", &x);
  printf("Digite o valor de y: ");
  scanf("%d", &y);
  printf("A norma do vetor é %f\n", n(x, y));
  return 0;
}