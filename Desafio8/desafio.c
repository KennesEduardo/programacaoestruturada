#include <math.h>
#include <stdio.h>

double degrau(double x) {
  if (x >= 0) {
    return 1;
  } else {
    return 0;
  }
}

double logistica(double x) { return 1 / (1 + exp(-x)); }

double tangente(double x) { return sinh(x) / cosh(x); }

double sigmoide(double x) {
  if (x >= 0) {
    return x;
  } else {
    return 0.01 * x;
  }
}

double gaussiana(double x) { return exp(-(x * x)); }

int main() {
  double x = 1.5;
  printf("Funcao degrau: %.2f\n", degrau(x));
  printf("Funcao logistica: %.2f\n", logistica(x));
  printf("Funcao tangente hiperbolica: %.2f\n", tangente(x));
  printf("Funcao sigmoide linear: %.2f\n", sigmoide(x));
  printf("Funcao gaussiana: %.2f\n", gaussiana(x));
  return 0;
}