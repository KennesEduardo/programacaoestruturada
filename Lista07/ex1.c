#include <stdio.h>

void procedimento(int start, int stop, int step) {
  double i;
  double n = (stop - start) / (double)(step - 1);
  for (i = start; i <= stop; i += n) {
    printf("%.2f ", i);
  }
}

int main() {
  procedimento(2, 3, 5);
  return 0;
}